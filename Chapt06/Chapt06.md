# 第６章　キーボードからの入力
## 6.1　入力用の関数
### 6.1.1　入力の必要性
### 6.1.2　scanf関数
### 6.1.3　数値の入力
#### なぜprintf関数では%lfなのにscanf関数では%fなのか
実数の入出力において，
```C
    printf("%f", ~);
    scanf("%lf", &~);
```
とする．ここで，入力変換指定子と出力変換指定子が異なるのはなぜだろうか．

これはC言語の関数呼び出しのルールとして，printfのような可変引数関数（引数の数が決まっていないもの）ではfloat型の引数は自動的にdouble型に変換されて渡される仕様があるからである．
これは **デフォルト引数プロモーション（Default Argument Promotions）** と呼ばれる．

## 参考文献
https://iifx.dev/ja/articles/20210277/c%E8%A8%80%E8%AA%9E-printf%E3%81%A7double%E3%81%AF-f-lf-c%E8%A8%80%E8%AA%9E%E3%81%AE%E8%90%BD%E3%81%A8%E3%81%97%E7%A9%B4%E3%81%A8%E6%AD%A3%E3%81%97%E3%81%84%E6%9B%B8%E5%BC%8F%E6%8C%87%E5%AE%9A%E5%AD%90%E3%82%92%E5%BE%B9%E5%BA%95%E8%A7%A3%E8%AA%AC

https://qiita.com/lo48576/items/9901f7d52692567b931c
