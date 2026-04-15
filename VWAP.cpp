/*
It's another optimal execution techique
VWAP is a algorithmic trading strategy that executes large orders in proporting the markets trading volume throughtout the day.
It aims to match the markets average traded price by participating more when volume is high and less when volume is low, reducing signaling risk and improving execution quality.
Instead of splitting orders equally over time(like TWAP), VWAP splits orders based on expected volume distribution.
  MOre shares executed during high-volume periods(E.g market open/close)
  Fewer shares executed during low-volume periods
This helps the trades blend into natural market activity and minimize price impacty.


*/
