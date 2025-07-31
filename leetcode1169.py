from typing import List
class Solution:
    def invalidTransactions(self, transactions: List[str]) -> List[str]:
        parsed = []
        invalid = [False] * len(transactions)

        for t in transactions:
            name, time, amount, city = t.split(',')
            parsed.append([name, int(time), int(amount), city, t])

        n = len(parsed)

        for i in range(n):
            name1, time1, amount1, city1, orig1 = parsed[i]

            if amount1 > 1000:
                invalid[i] = True

            for j in range(n):
                if i == j:
                    continue
                name2, time2, amount2, city2, orig2 = parsed[j]
                if name1 == name2 and abs(time1 - time2) <= 60 and city1 != city2:
                    invalid[i] = True
                    invalid[j] = True

        return [transactions[i] for i in range(n) if invalid[i]]


# Main function to test the solution
if __name__ == "__main__":
    transactions = [
        "alice,20,1220,mtv",
        "alice,20,1220,mtv"
    ]
    sol = Solution()
    result = sol.invalidTransactions(transactions)
    print(result)  # Expected: ["alice,20,1220,mtv", "alice,20,1220,mtv"]
