class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        // int count=0;
        // int i=0;
        // int total=0;
        // while(true)
        // {
        //     switch(events[i])
        //     {
        //         case "1":
        //         {
        //             total++;
        //         }
        //         case "2":
        //         {
        //             total++;
        //         }
        //         case "3":
        //         {
        //             total++;
        //         }
        //         case "4":
        //         {
        //             total++;
        //         }
        //         case "6":
        //         {
        //             total++;
        //         }
        //         case "W":
        //         {
        //             count++;
        //         }
        //         case "WD":
        //         {
        //             total++;
        //         }
        //         case "NB":
        //         {
        //             total++;
        //         }
        //     }
        //     i++;
        // }
        // int arr[]=[total,count];
        // return arr;
        int counter = 0, score = 0;
        for (int i = 0; i < events.size(); i++) {
            if (counter == 10)
                break;
            if (events[i] == "W")
                counter++;
            else if (events[i] == "WD" || events[i] == "NB")
                score++;
            else
                score += stoi(events[i]);
        }
        // int arr[]={score,counter};
        return {score, counter};
    }
};
