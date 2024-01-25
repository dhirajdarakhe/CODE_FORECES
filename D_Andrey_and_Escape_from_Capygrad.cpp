import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static final int N = 200005;
    static ArrayList<Integer>[] g = new ArrayList[N];
    static int[] vis = new int[N];
    static int cnt = 0;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < N; i++) {
            g[i] = new ArrayList<>();
        }

        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            g[i + 1].add(x);
        }

        int maxi = 0;
        int ele = -1;
        for (int i = 1; i <= n; i++) {
            if (vis[i] == 0) {
                cnt = 0;
                dfs(i);
                if (cnt > maxi) {
                    maxi = cnt;
                    ele = i;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            vis[i] = 0;
        }

        dfsp(ele);
        System.out.println();
    }

    static void dfs(int v) {
        vis[v] = 1;
        cnt++;
        for (int x : g[v]) {
            if (vis[x] == 0) {
                dfs(x);
            }
        }
    }

    static void dfsp(int v) {
        vis[v] = 1;
        System.out.print(v + " ");
        for (int x : g[v]) {
            if (vis[x] == 0) {
                dfsp(x);
            }
        }
    }
}
