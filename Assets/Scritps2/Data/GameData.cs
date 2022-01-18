using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameData : MonoBehaviour
{
    public string dataPath_Level;
    public string dataPath_Tower;
    public string dataPath_Enemy;
    public string dataPath_ITEM;
    [SerializeField]
    public List<Dictionary<string, object>> data;

    public List<float> Tower_Level1_Per;
    public List<float> Tower_Level2_Per;
    public List<float> Tower_Level3_Per;


    public List<float> Tower_Ad;
    public List<float> Tower_As;
    public List<float> Tower_Rang;
    public List<float> Tower_Cri_P;
    public List<float> Tower_Cri_D;
    public List<string> Tower_Info_String;


    public List<int> Enemy_con;
    public List<int> Enemy_Gold;
    public List<float> Enemy_Hp;
    public List<float> Enemy_Sp;
    public List<float> Enemy_De;


    public List<float> ITEM_AD;
    public List<float> ITEM_AS;
    public List<float> ITEM_Cri_P;
    public List<float> ITEM_Cri_D;
    public List<string> ITEM_Info_String1;
    public List<string> ITEM_Info_String2;
    public List<string> ITEM_Info_String3;
    public List<string> ITEM_Info_String4;
    public List<string> ITEM_Info_String5;

    void Level()
    {
        data = CSVReader.Read(dataPath_Level);

        for (int i = 0; i < data.Count; i++)
        {
            Tower_Level1_Per.Add(float.Parse(data[i]["PER1"].ToString()));
            Tower_Level2_Per.Add(float.Parse(data[i]["PER2"].ToString()));
            Tower_Level3_Per.Add(float.Parse(data[i]["PER3"].ToString()));
            //Tower_Level1_Per[i]= float.Parse(data[i]["PER1"].ToString());
            //Tower_Level2_Per[i]= float.Parse(data[i]["PER2"].ToString());
            //Tower_Level3_Per[i]= float.Parse(data[i]["PER3"].ToString());
        }
    }
    void Tower1()
    {
        data = CSVReader.Read(dataPath_Tower);

        for (int i = 0; i < data.Count; i++)
        {
            Tower_Ad.Add(float.Parse(data[i]["AD"].ToString()));
            Tower_As.Add(float.Parse(data[i]["AS"].ToString()));
            Tower_Rang.Add(float.Parse(data[i]["RANG"].ToString()));
            Tower_Cri_P.Add(float.Parse(data[i]["CRI_P"].ToString()));
            Tower_Cri_D.Add(float.Parse(data[i]["CRI_D"].ToString()));
            Tower_Info_String.Add(data[i]["STRING"].ToString());

            
            //Tower_Level1_Per[i]= float.Parse(data[i]["PER1"].ToString());
            //Tower_Level2_Per[i]= float.Parse(data[i]["PER2"].ToString());
            //Tower_Level3_Per[i]= float.Parse(data[i]["PER3"].ToString());
        }
    }
    void Enemy()
    {
        data = CSVReader.Read(dataPath_Enemy);

        for (int i = 0; i < data.Count; i++)
        {
            Enemy_con.Add(int.Parse(data[i]["CON"].ToString()));
            Enemy_Gold.Add(int.Parse(data[i]["GOLD"].ToString()));
            Enemy_Hp.Add(float.Parse(data[i]["HP"].ToString()));
            Enemy_Sp.Add(float.Parse(data[i]["SP"].ToString()));
            Enemy_De.Add(float.Parse(data[i]["DE"].ToString()));
            //Tower_Level1_Per[i]= float.Parse(data[i]["PER1"].ToString());
            //Tower_Level2_Per[i]= float.Parse(data[i]["PER2"].ToString());
            //Tower_Level3_Per[i]= float.Parse(data[i]["PER3"].ToString());
        }
    }
    void ITEM()
    {
        data = CSVReader.Read(dataPath_ITEM);

        for (int i = 0; i < data.Count; i++)
        {
            //ITEM_AD.Add(float.Parse(data[i]["AD"].ToString()));
            //ITEM_AS.Add(float.Parse(data[i]["AS"].ToString()));
            //ITEM_Cri_P.Add(float.Parse(data[i]["Cri_P"].ToString()));
            //ITEM_Cri_D.Add(float.Parse(data[i]["Cri_D"].ToString()));
            ITEM_Info_String1.Add(data[i]["STRING1"].ToString());
            ITEM_Info_String2.Add(data[i]["STRING2"].ToString());
            ITEM_Info_String3.Add(data[i]["STRING3"].ToString());
            ITEM_Info_String4.Add(data[i]["STRING4"].ToString());
            ITEM_Info_String5.Add(data[i]["STRING5"].ToString());
        }
    }
    private void Awake()
    {

        Level();
        Tower1();
        Enemy();
        ITEM();




    }

}
