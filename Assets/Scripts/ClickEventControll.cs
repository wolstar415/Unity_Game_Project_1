using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ClickEventControll : MonoBehaviour
{
    public GameObject ui;

    public bool onclick;
    public GameObject setting;
    public Camera Mycamera;
    public RaycastHit hit;
    public GameObject BuildingClickButton;
    public GameObject BuildingReadyTile;
    public bool BuildingReadyBool;
    public UIClick_Evenet uiClick_Evenet;
    //Vector3 pos;
    public Vector3 posz;
    //public GameObject towerobject;
    public LayerMask layermask;

    public int LevelTower_build;

    public int selectlevelint;

    public GameData gamedata;

    

    [Header("오브젝트관리")]
    public GameObject ClickObject;
    public GameObject towerObject;
    public GameObject tileObject;




    public enum ClickState
    {
        None = 0,
        Tile = 1,
        Tower = 2,
        Enemy = 3,
    }

    public enum PlayerState
    {
        None = 0,
        Building = 1,
        Draging = 2,
    }

    public ClickState clickState;
    public PlayerState playerState;

    void Start()  // 처음 시작시 실행되는 함수입니다.
    {
        uiClick_Evenet = GetComponent<UIClick_Evenet>();
        gamedata = GameObject.Find("GameData").GetComponent<GameData>();
        //BuildingClickButton = GameObject.Find("BuildingClickButtonPanel");
        //BuildingClickButton.SetActive(false);
        

    }
    public GameObject Chantower(GameObject tower1)
    {
        int level = tower1.GetComponent<TowerStat>().Level;
        GameObject tile = tower1.GetComponent<TowerStat>().Tile;
        int ran_tower = 0;
        GameObject tower = null;
        //int i = 
        Tower_Destory(tower1);
        LevelTower_build = level;
        if (level == 1)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_1.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_1[ran_tower]);
        }
        else if (level == 2)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2[ran_tower]);
        }
        else if (level == 3)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3[ran_tower]);
        }
        else if (level == 4)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_4.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_4[ran_tower]);
        }
        else if (level == 5)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_5.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_5[ran_tower]);
        }
        else if (level == 6)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_6.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_6[ran_tower]);
        }
        else if (level == 7)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_7.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_7[ran_tower]);
        }
        else if (level == 8)
        {

            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_8.Count);
            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_8[ran_tower]);
        }

        tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
        tile.GetComponent<TlieObject>().TowerObject = tower;
        tile.GetComponent<TlieObject>().TowerBool = true;
        tower.GetComponent<TowerStat>().Tile = tile;
        tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
        qualityGo(tower);
        tower.GetComponent<TowerStat>().itemCreate();
        towerObject=tower;
        ClickObject = tower;
        towerbutton();
        uiClick_Evenet.TowerClick(tower);
        clickState = ClickState.Tower;
        towerObject = tower;
        ClickObject = tower;
        tileObject = tower.GetComponent<TowerStat>().Tile;
        towerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = true;
        //Debug.Log("뭔뎅2");
        return tower;

    }
    void qualityGo(GameObject tower)
    {
        int q = Random.Range(0,5);
        
        tower.GetComponent<TowerStat>().quality = q;
    }
    void qualityGo2(GameObject tower)
    {
        int q = 0;
        float ran_f = Random.Range(0, 100);


        if (25f >= ran_f && ran_f < 50f)
        {
            q = 1;
        }
        else if (50f >= ran_f && ran_f < 65f)
        {
            q = 2;
        }
        else if (65f >= ran_f && ran_f < 80f)
        {
            q = 3;
        }
        else if (80f >= ran_f && ran_f < 92f)
        {
            q = 4;
        }
        else if (ran_f >= 92f)
        {
            q = 5;
        }
        else
        {
            q = 0;

        }
        tower.GetComponent<TowerStat>().quality = q;
    }
    void towerbutton()
    {
        //if (ClickObject != null && Tower. && ClickObject != hit.collider.gameObject) // 건물이건물 클릭함
        //{
        //    if (ClickObject.GetComponent<TowerStat>().Level == hit.collider.gameObject.GetComponent<TowerStat>().Level && ClickObject.GetComponent<TowerStat>().Level < 8)
        //    {
        //        //Debug.Log("레벨이 똑같아");
        //        //Debug.Log("클릭 오브젝트 : "+ClickObject.gameObject.name);
        //        //Debug.Log("타켓 오브젝트 : "+ hit.collider.gameObject.name);




        //        UpTower(ClickObject, hit.collider.gameObject);
        //        uiClick_Evenet.NoneClick();
        //        clickState = ClickState.None;
        //        ClickObject = null;
        //        return;
        //    }

        //}


        //ClickObject = hit.collider.gameObject;
        towerObject = ClickObject;
        try
        {
        towerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = true;

        }
        catch (System.Exception)
        {

        }

        //Debug.Log("뭔뎅1");

        tileObject = towerObject.GetComponent<TowerStat>().Tile;
        uiClick_Evenet.TowerClick(ClickObject);
        clickState = ClickState.Tower;
    }
    void towerbuild()
    {
        float ran_f = Random.Range(0.01f, 100);
        int lv = GameObject.Find("GameInfo").GetComponent<GameInfo>().Level;
        int ran_tower;
        //Debug.Log(ran_f);


        if (gamedata.Tower_Level3_Per[lv] > ran_f)
        {
            LevelTower_build = 3;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3.Count);
            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3[ran_tower]);
            tower.transform.position = ClickObject.transform.position + new Vector3(0, 1f, 0);
            hit.collider.gameObject.GetComponent<TlieObject>().TowerObject = tower;
            hit.collider.gameObject.GetComponent<TlieObject>().TowerBool = true;
            tower.GetComponent<TowerStat>().Tile = hit.collider.gameObject;
            tower.GetComponent<TowerStat>().TileNum = hit.collider.gameObject.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();


        }
        else if (gamedata.Tower_Level3_Per[lv] < ran_f && ran_f <= gamedata.Tower_Level2_Per[lv])
        {
            LevelTower_build = 2;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2.Count);
            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2[ran_tower]);
            tower.transform.position = ClickObject.transform.position + new Vector3(0, 1f, 0);
            hit.collider.gameObject.GetComponent<TlieObject>().TowerObject = tower;
            hit.collider.gameObject.GetComponent<TlieObject>().TowerBool = true;
            tower.GetComponent<TowerStat>().Tile = hit.collider.gameObject;
            tower.GetComponent<TowerStat>().TileNum = hit.collider.gameObject.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
        }
        else
        {
            LevelTower_build = 1;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_1.Count);
            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_1[ran_tower]);
            tower.transform.position = ClickObject.transform.position + new Vector3(0, 1f, 0);
            hit.collider.gameObject.GetComponent<TlieObject>().TowerObject = tower;
            hit.collider.gameObject.GetComponent<TlieObject>().TowerBool = true;
            tower.GetComponent<TowerStat>().Tile = hit.collider.gameObject;
            tower.GetComponent<TowerStat>().TileNum = hit.collider.gameObject.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();

        }









    }
    private void initi()
    {
        if (towerObject != null)
        {
            towerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        tileObject.transform.GetChild(1).gameObject.SetActive(false);
        //BuildingClickButton.SetActive(false);
        uiClick_Evenet.NoneClick();
        clickState = ClickState.None;
        BuildingReadyBool = false;
        ClickObject = null;
        towerObject = null;
        tileObject = null;
        BuildingReadyTile = null;
        playerState = PlayerState.None;
        //onclick = false;

    }
    private void Switchcheck()
    {

        if (BuildingReadyBool == true && hit.collider.gameObject != BuildingReadyTile)
        {
            initi();
            return;
            //다른곳 선택함 사라져!
        }


        switch (hit.collider.gameObject.tag)
        {


            case "BuildingTile":

                    

                if (ClickObject != null)
                {
                    if (ClickObject.tag == "Tower")
                    {

                    ClickObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                    }
                }
                if (towerObject != null)
                {
                    towerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                }
                uiClick_Evenet.NoneClick();
                if (hit.collider.GetComponent<TlieObject>().TowerObject != null)
                {
                    hit.collider.GetComponent<TlieObject>().TowerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                    ClickObject = hit.collider.GetComponent<TlieObject>().TowerObject;
                    towerObject = hit.collider.GetComponent<TlieObject>().TowerObject;
                    tileObject = hit.collider.gameObject;
                    towerbutton();
                    //onclick = false;
                    //clickState = ClickState.Tower;
                    //GameObject Se = hit.collider.GetComponent<TlieObject>().TowerObject;

                    //if (clickState == ClickState.Tower && ClickObject != null && ClickObject != Se) // 건물이건물 클릭함
                    //{
                    //    if (ClickObject.GetComponent<TowerStat>().Level == Se.GetComponent<TowerStat>().Level && ClickObject.GetComponent<TowerStat>().Level < 8)
                    //    {
                    //        //Debug.Log("레벨이 똑같아");
                    //        //Debug.Log("클릭 오브젝트 : " + ClickObject.gameObject.name);
                    //        //Debug.Log("타켓 오브젝트 : " + hit.collider.gameObject.name);
                    //        Debug.Log("타일선택함");




                    //        UpTower(ClickObject, Se);
                    //        uiClick_Evenet.NoneClick();
                    //        clickState = ClickState.None;
                    //        ClickObject = null;
                    //        return;
                    //    }
                    //}

                    //uiClick_Evenet.TowerClick(Se);
                    //ClickObject = hit.collider.GetComponent<TlieObject>().TowerObject;
                    //clickState = ClickState.Tower;



                }
                else
                {
                    if (BuildingReadyBool)
                    {
                        if (GameObject.Find("GameInfo").GetComponent<GameInfo>().Gold >= 30) // 돈이 있을때
                        {
                            GameObject.Find("GameInfo").GetComponent<GameInfo>().GoldCheck(-30);

                            towerbuild();
                            onclick = false;
                            //clickState = ClickEventControll.ClickState.Tower;
                        }
                        initi();

                    }
                    else
                    {

                        ClickObject = hit.collider.gameObject;
                        //BuildingClickButton.SetActive(true);
                        BuildingReadyTile = hit.collider.gameObject;

                        tileObject = hit.collider.gameObject;
                        tileObject.transform.GetChild(1).gameObject.SetActive(true);
                        BuildingReadyBool = true;

                        //BuildingClickButton.transform.position = Camera.main.WorldToScreenPoint(hit.collider.transform.position);
                        clickState = ClickState.Tile;
                        playerState = PlayerState.Building;
                    }
                }






                break;
            case "Tower":
                hit.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                if (ClickObject != null)
                {
                    if (ClickObject.tag == "Tower")
                    {

                        ClickObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                    }
                }
                if (towerObject != null)
                {
                    towerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                }
                ClickObject = hit.collider.gameObject;
                towerbutton();


                break;
            case "Enemy":

                if (clickState == ClickState.Tower)
                {
                    ClickObject.GetComponent<Tower_Controll>().targetObject = hit.collider.gameObject;
                }

                onclick = false;
                //ClickObject = hit.collider.gameObject;
                //uiClick_Evenet.EnemyClick(ClickObject);
                //clickState = ClickState.Enemy;
                break;

            default:
                if (ClickObject != null)
                {
                    if (ClickObject.tag == "Tower")
                    {

                        ClickObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                    }
                }
                if (towerObject != null)
                {
                    towerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
                }


                ClickObject = null;
                //BuildingClickButton.SetActive(false);
                uiClick_Evenet.NoneClick();
                clickState = ClickState.None;
                break;
        }


    }

    void Update() // 매 프레임마다 실행되는 함수입니다.
    {

        if (Input.GetMouseButtonDown(0) )
        {
            if (onclick )
            {
                onclick = false;
                return;
            }

            if (ui.activeSelf == true && Input.mousePosition.y < 259 && Input.mousePosition.x > 600 && Input.mousePosition.x < 1297)
            {

                //Debug.Log("체크");
                onclick = false;
                return;
            }

            //if (EventSystem.current.IsPointerOverGameObject())
            //{
            //    Debug.Log("체크");
            //    return;
            //}
            //Debug.Log(Input.mousePosition);
            posz = Input.mousePosition;

            Ray ray = Mycamera.ScreenPointToRay(Input.mousePosition);
            //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            //if (EventSystem.current.IsPointerOverGameObject())
            //{
            //    ClickObject = null;
            //    return;
            //}
            // Debug.Log(Input.mousePosition);


            
            if (Physics.Raycast(ray,out hit,layermask))
            {
                if (hit.collider != null)
                {


                    //if (EventSystem.current.IsPointerOverGameObject())
                    //{
                    //Debug.Log("버그");
                    //return;
                    //   ClickObject = null;
                    // }
                    //else
                    //{
                    onclick = true;
                    //pos = hit.collider.transform.position;
                    //
                    //if (hit.collider.tag == "Tower")
                    //{
                       // pos = hit.collider.transform.GetChild(3).position;

                    //}
                        //
                    


                        Switchcheck();
                   // }
                }


            }
            return;

        }
        if (Input.GetMouseButtonUp(0) && onclick == true)
        {
            onclick = false;
            if (clickState == ClickState.Tower && ClickObject != null && ClickObject.gameObject.tag == "Tower")
            {


                
                Ray ray = Mycamera.ScreenPointToRay(Input.mousePosition);
                bool check=false;
                GameObject checktower=null;
                if (Physics.Raycast(ray, out hit))
                {
                    if (hit.collider != null)
                    {
                        
                        //Debug.Log(hit.collider.gameObject.name);
                        

                        if (hit.collider.tag == "BuildingTile")
                        {
                            if (hit.collider.GetComponent<TlieObject>().TowerBool == true && hit.collider.GetComponent<TlieObject>().TowerObject != towerObject)
                            {
                                checktower = hit.collider.GetComponent<TlieObject>().TowerObject;
                                check = true;
                            }
                        }

                        if (hit.collider.tag == "Tower" && hit.collider.gameObject != towerObject )
                        {
                            checktower = hit.collider.gameObject;
                            check = true;
                        }
                        if (check)
                        {
                                if (towerObject.GetComponent<TowerStat>().Level == checktower.GetComponent<TowerStat>().Level && towerObject.tag == "Tower"  && checktower.tag =="Tower" && towerObject != checktower && towerObject.GetComponent<TowerStat>().Level < 8)
                                {
                                



                                    UpTower(checktower, towerObject);
                                //towerbutton();
                                //uiClick_Evenet.NoneClick();
                                //onclick = false;
                                clickState = ClickState.None;

                                ClickObject = null;
                                //towerObject = null;
                            }



                        }

                    }


                }

                if (ClickObject != null)
                {

                //ClickObject.GetComponent<CapsuleCollider>().enabled = true;
                ClickObject.GetComponent<Tower_Controll>().towerstate = Tower_Controll.TowerState.IDLE;
                    //pos.y = 1.5f;
                    //ClickObject.transform.position = pos;
                    //
                    ClickObject.transform.GetChild(3).localPosition = ClickObject.gameObject.GetComponent<TowerStat>().startpos;
                    //
                    ClickObject.GetComponent<TowerStat>().moveOk = false;

                }
            }
            
            playerState = PlayerState.None;
            selectlevelint = 0;
            //onclick = false;
            return;
        }
        if (Input.GetMouseButton(0)&& onclick==true)
            {
            if (playerState == PlayerState.None && setting.activeSelf==false && ClickObject == null)
            {


            if (posz.y < Input.mousePosition.y)
            {
                    Mycamera.transform.position = Mycamera.transform.position + new Vector3(0, 0, Time.deltaTime * 1 * 8);
                if (Mycamera.transform.position.z > -5.3)
                {
                        Mycamera.transform.position = new Vector3(Mycamera.transform.position.x, Mycamera.transform.position.y, -5.3f);
                }
            }
            if (posz.y > Input.mousePosition.y)
            {

                    Mycamera.transform.position = Mycamera.transform.position + new Vector3(0, 0, Time.deltaTime * -1 * 8);
                if (Mycamera.transform.position.z < -11)
                {
                        Mycamera.transform.position = new Vector3(Mycamera.transform.position.x, Mycamera.transform.position.y, -11f);
                }
            }



            }



            if (clickState==ClickState.Tower && ClickObject!=null && ClickObject.gameObject.tag=="Tower")
            {

                Vector3 scrSpace = Camera.main.WorldToScreenPoint(ClickObject.transform.position);


               
                Vector3 mousePosition = new Vector3(Input.mousePosition.x,
                Input.mousePosition.y, scrSpace.z);
                Vector3 objPosition = Camera.main.ScreenToWorldPoint(mousePosition);
                float Dis = Vector3.Distance(ClickObject.GetComponent<TowerStat>().Tile.transform.position, objPosition);

                //Debug.Log(Dis);

                if (Dis < 1.1 && ClickObject.GetComponent<TowerStat>().moveOk == false)
                {
                    return;
                }
                ClickObject.GetComponent<TowerStat>().moveOk = true;

                playerState = PlayerState.Draging;

                //ClickObject.GetComponent<CapsuleCollider>().enabled = false;
                ClickObject.GetComponent<Tower_Controll>().towerstate = Tower_Controll.TowerState.MOVING;

   


                selectlevelint = ClickObject.GetComponent<TowerStat>().Level;
                

                //ClickObject.transform.position = new Vector3(objPosition.x, 1.5f, objPosition.z);
                //
                ClickObject.transform.GetChild(3).position = new Vector3(objPosition.x, 1.5f, objPosition.z);
                //
                //Debug.Log(Input.mousePosition.y);

                if (1000 < Input.mousePosition.y )
                {
                    Mycamera.transform.position = Mycamera.transform.position + new Vector3(0, 0, Time.deltaTime * 1 * 8);
                    if (Mycamera.transform.position.z > -5.3)
                    {
                        Mycamera.transform.position = new Vector3(Mycamera.transform.position.x, Mycamera.transform.position.y, -5.3f);
                    }
                }
                if (55 > Input.mousePosition.y )
                {

                    Mycamera.transform.position = Mycamera.transform.position + new Vector3(0, 0, Time.deltaTime * -1 * 8);
                    if (Mycamera.transform.position.z < -11)
                    {
                        Mycamera.transform.position = new Vector3(Mycamera.transform.position.x, Mycamera.transform.position.y, -11f);
                    }
                }

            }
        }



    }

    public void CancleTower()
    {
        if (towerObject != null)
        {
            towerObject.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        tileObject.transform.GetChild(1).gameObject.SetActive(false);
        //BuildingClickButton.SetActive(false);
        uiClick_Evenet.NoneClick();
        clickState = ClickState.None;
        BuildingReadyBool = false;
        ClickObject = null;
        towerObject = null;
        tileObject = null;
        BuildingReadyTile = null;
        playerState = PlayerState.None;
    }
    public void Tower_Destory(GameObject tower)
    {
        GameObject tile = tower.GetComponent<TowerStat>().Tile;

        //tile.GetComponent<TlieObject>
        tile.GetComponent<TlieObject>().TowerObject = null;
        tile.GetComponent<TlieObject>().TowerBool = false;
        Destroy(tower.GetComponent<TowerStat>().DamageUI);
        tower.GetComponent<Tower_Controll>().TowerDestory();
        //Destroy(tower);

    }
    void UpTower(GameObject fi_tower, GameObject se_tower)
    {
        
        int ran_tower;

        if (fi_tower == se_tower)
        {
            return;
        }
        
        if (fi_tower.GetComponent<TowerStat>().Level ==1)
        {
            GameObject tile = fi_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(fi_tower);
            Tower_Destory(se_tower);

            LevelTower_build = 2;
        ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2.Count);

            

            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2[ran_tower]);
        tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

        tower.GetComponent<TowerStat>().Tile = tile;
        tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;


        }
        else if (fi_tower.GetComponent<TowerStat>().Level == 2)
        {
            GameObject tile = fi_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(fi_tower);
            Tower_Destory(se_tower);

            LevelTower_build = 3;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3.Count);



            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (fi_tower.GetComponent<TowerStat>().Level == 3)
        {
            GameObject tile = fi_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(fi_tower);
            Tower_Destory(se_tower);

            LevelTower_build = 4;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_4.Count);



            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_4[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (fi_tower.GetComponent<TowerStat>().Level == 4)
        {
            GameObject tile = fi_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(fi_tower);
            Tower_Destory(se_tower);

            LevelTower_build = 5;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_5.Count);



            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_5[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (fi_tower.GetComponent<TowerStat>().Level == 5)
        {
            GameObject tile = fi_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(fi_tower);
            Tower_Destory(se_tower);

            LevelTower_build = 6;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_6.Count);



            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_6[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (fi_tower.GetComponent<TowerStat>().Level == 6)
        {
            GameObject tile = fi_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(fi_tower);
            Tower_Destory(se_tower);

            LevelTower_build = 7;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_7.Count);



            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_7[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (fi_tower.GetComponent<TowerStat>().Level == 7)
        {
            GameObject tile = fi_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(fi_tower);
            Tower_Destory(se_tower);

            LevelTower_build = 8;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_8.Count);



            GameObject tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_8[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }

        




    }

    public GameObject UpTower2(GameObject f_tower)
    {

        int ran_tower;
        GameObject tower = null;

        if (f_tower.GetComponent<TowerStat>().Level == 1)
        {
            GameObject tile = f_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(f_tower);

            LevelTower_build = 2;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2.Count);



            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_2[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;


        }
        else if (f_tower.GetComponent<TowerStat>().Level == 2)
        {
            GameObject tile = f_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(f_tower);

            LevelTower_build = 3;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3.Count);



            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_3[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (f_tower.GetComponent<TowerStat>().Level == 3)
        {
            GameObject tile = f_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(f_tower);

            LevelTower_build = 4;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_4.Count);



            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_4[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (f_tower.GetComponent<TowerStat>().Level == 4)
        {
            GameObject tile = f_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(f_tower);
 

            LevelTower_build = 5;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_5.Count);



            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_5[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (f_tower.GetComponent<TowerStat>().Level == 5)
        {
            GameObject tile = f_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(f_tower);

            LevelTower_build = 6;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_6.Count);



            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_6[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (f_tower.GetComponent<TowerStat>().Level == 6)
        {
            GameObject tile = f_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(f_tower);

            LevelTower_build = 7;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_7.Count);



            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_7[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        else if (f_tower.GetComponent<TowerStat>().Level == 7)
        {
            GameObject tile = f_tower.GetComponent<TowerStat>().Tile;
            Tower_Destory(f_tower);


            LevelTower_build = 8;
            ran_tower = Random.Range(0, GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_8.Count);



            tower = Instantiate(GameObject.Find("Tower_Class").GetComponent<Tower_Class>().Tower_Level_8[ran_tower]);
            tower.transform.position = tile.transform.position + new Vector3(0, 1f, 0);
            tile.GetComponent<TlieObject>().TowerObject = tower;
            tile.GetComponent<TlieObject>().TowerBool = true;

            tower.GetComponent<TowerStat>().Tile = tile;
            tower.GetComponent<TowerStat>().TileNum = tile.GetComponent<TlieObject>().TowerTileNum;
            qualityGo(tower);
            tower.GetComponent<TowerStat>().itemCreate();
            towerObject = tower;
            ClickObject = tower;
            towerbutton();
            //tower.transform.GetChild(1).gameObject.GetComponent<MeshRenderer>().enabled = false;
        }


        return tower;



    }






}
