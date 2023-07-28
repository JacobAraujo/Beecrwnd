import itertools

def calculate_distance(x1, y1, x2, y2):
    return ((x2 - x1) ** 2 + (y2 - y1) ** 2) ** 0.5

def max_fish_in_net(s, fish_coordinates):
    max_fish = 0

    for r in range(1, len(fish_coordinates) + 1):
        for combination in itertools.combinations(fish_coordinates, r):
            x_min = min(x for x, _ in combination)
            x_max = max(x for x, _ in combination)
            y_min = min(y for _, y in combination)
            y_max = max(y for _, y in combination)

            if x_max - x_min <= s and y_max - y_min <= s:
                captured_fish = sum(1 for x, y in fish_coordinates if x_min <= x <= x_max and y_min <= y <= y_max)
                max_fish = max(max_fish, captured_fish)

    return max_fish

s, n = map(int, input().split())

fish_coordinates = []
for _ in range(n):
    x, y = map(int, input().split())
    fish_coordinates.append((x, y))

max_fish = max_fish_in_net(s, fish_coordinates)

print(max_fish)
