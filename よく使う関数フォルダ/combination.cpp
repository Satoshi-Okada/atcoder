//繰り返し二乗法。雰囲気だけ。これ使う時はMODをllとかにしとかないとしんどい
ll PowMod(ll n, ll m)
{
    if (m == 0)
    {
        return (ll)1;
    }
    if (m % 2 == 0)
    {
        ll temp = PowMod(n, m / 2);
        return temp * temp % MOD;
    }
    return n * PowMod(n, m - 1) % MOD;
}

//

//MODの逆元を用いたコンビネーション
ll inv_num(ll num)
{
    return PowMod(num, MOD - 2);
}

ll COM(ll n, ll a)
{
    ll X, Y;
    X = 1;
    Y = 1;
    rep(i, a)
    {
        X *= (n - i) % MOD;
        Y *= (a - i) % MOD;
    }
    return X * (inv_num(Y)) % MOD;
}
//