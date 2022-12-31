import sys


def compute_min_refills(distance, tank, stops):
    n = len(stops)
    stops.append(distance)
    stops.insert(0,0)
    numRefills, currentRefills = 0,0
    while currentRefills<=n:
        lastRefill = currentRefills
        while currentRefills<=n and stops[currentRefills+1]-stops[lastRefill]<=tank:
            currentRefills += 1
        if currentRefills == lastRefill:
            return -1
        if currentRefills<=n:
            numRefills += 1 
    return numRefills

if __name__ == '__main__':
    d, m, _, *stops = map(int, sys.stdin.read().split())
    print(compute_min_refills(d, m, stops))
