

  /* Enter your code here */
   if (Fireball* f = dynamic_cast<Fireball*>(spell)) {
        f->revealFirepower();
    }
    else if (Frostbite* f = dynamic_cast<Frostbite*>(spell)) {
        f->revealFrostpower();
    }
    else if (Thunderstorm* t = dynamic_cast<Thunderstorm*>(spell)) {
        t->revealThunderpower();
    }
    else if (Waterbolt* w = dynamic_cast<Waterbolt*>(spell)) {
        w->revealWaterpower();
    }
    else {
        string spellName = spell->revealScrollName();
        string journal = SpellJournal::read();

        int n = spellName.size();
        int m = journal.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (spellName[i - 1] == journal[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        cout << dp[n][m] << endl;
    }

