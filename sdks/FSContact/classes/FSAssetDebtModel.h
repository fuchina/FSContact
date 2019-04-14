//
//  FSAssetDebtModel.h
//  myhome
//
//  Created by FudonFuchina on 2017/12/20.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSAssetDebtModel : NSObject

@property (nonatomic,copy) NSString   *ph;

//  每个科目以2个字母表示
/*
 流动资产以a开头，
 非流动资产以b开头，
 流动负债以c开头，
 非流动负债以d开头,
 所有者权益以o开头
 
 收入表以z开头
 */

// 流动资产
@property (nonatomic,copy)   NSString   *ab;  // 货币资金
@property (nonatomic,copy)   NSString   *ac;  // 交易性金融资产
@property (nonatomic,copy)   NSString   *ad;  // 应收票据
@property (nonatomic,copy)   NSString   *ae;  // 应收账款
@property (nonatomic,copy)   NSString   *af;  // 预付款项
@property (nonatomic,copy)   NSString   *ag;  // 应收利息
@property (nonatomic,copy)   NSString   *ah;  // 应收股利
@property (nonatomic,copy)   NSString   *ai;  // 其他应收款
@property (nonatomic,copy)   NSString   *aj;  // 存货
@property (nonatomic,copy)   NSString   *ak;  // 一年内到期的非流动资产
@property (nonatomic,copy)   NSString   *al;  // 其他流动资产
@property (nonatomic,copy)   NSString   *aa;  // 流动资产合计
// 非流动资产
@property (nonatomic,copy)   NSString   *ba;  // 可供出售金融资产
@property (nonatomic,copy)   NSString   *bc;  // 持有至到期投资
@property (nonatomic,copy)   NSString   *bd;  // 长期应收款
@property (nonatomic,copy)   NSString   *be;  // 长期股权投资
@property (nonatomic,copy)   NSString   *bf;  // 投资性房地产
@property (nonatomic,copy)   NSString   *bg;  // 固定资产
@property (nonatomic,copy)   NSString   *bh;  // 在建工程
@property (nonatomic,copy)   NSString   *bi;  // 工程物资
@property (nonatomic,copy)   NSString   *bj;  // 固定资产清理
@property (nonatomic,copy)   NSString   *bk;  // 生产性生物资产
@property (nonatomic,copy)   NSString   *bl;  // 油气资产
@property (nonatomic,copy)   NSString   *bm;  // 无形资产
@property (nonatomic,copy)   NSString   *bn;  // 开发支出
@property (nonatomic,copy)   NSString   *bo;  // 商誉
@property (nonatomic,copy)   NSString   *bp;  // 长期待摊费用
@property (nonatomic,copy)   NSString   *bq;  // 递延所得税资产
@property (nonatomic,copy)   NSString   *br;  // 其他非流动资产
@property (nonatomic,copy)   NSString   *bb;  // 非流动资产合计
// 资产总计
@property (nonatomic,copy)   NSString   *zc;  // 资产总计
// 流动负债
@property (nonatomic,copy)   NSString   *ca;  // 短期借款
@property (nonatomic,copy)   NSString   *cb;  // 交易性金融负债
@property (nonatomic,copy)   NSString   *cd;  // 应付票据
@property (nonatomic,copy)   NSString   *ce;  // 应付账款
@property (nonatomic,copy)   NSString   *cf;  // 预收款项
@property (nonatomic,copy)   NSString   *cg;  // 应付职工薪酬
@property (nonatomic,copy)   NSString   *ch;  // 应交税费
@property (nonatomic,copy)   NSString   *ci;  // 应付利息
@property (nonatomic,copy)   NSString   *cj;  // 应付股利
@property (nonatomic,copy)   NSString   *ck;  // 其他应付款
@property (nonatomic,copy)   NSString   *cl;  // 一年内到期的非流动性负债
@property (nonatomic,copy)   NSString   *cm;  // 其他流动负债
@property (nonatomic,copy)   NSString   *cc;  // 流动负债合计
// 非流动负债
@property (nonatomic,copy)   NSString   *da;  // 长期借款
@property (nonatomic,copy)   NSString   *db;  // 应付债券
@property (nonatomic,copy)   NSString   *dc;  // 长期应付款
@property (nonatomic,copy)   NSString   *de;  // 专项应付款
@property (nonatomic,copy)   NSString   *df;  // 递延所得税负债
@property (nonatomic,copy)   NSString   *dg;  // 其他非流动性负债
@property (nonatomic,copy)   NSString   *dd;  // 非流动负债合计
// 负债合计
@property (nonatomic,copy)   NSString   *fz;  // 负债合计
// 所有者权益
@property (nonatomic,copy)   NSString   *oa;  // 股本
@property (nonatomic,copy)   NSString   *ob;  // 资本公积
@property (nonatomic,copy)   NSString   *oc;  // 库存股
@property (nonatomic,copy)   NSString   *od;  // 盈余公积
@property (nonatomic,copy)   NSString   *oe;  // 未分配利润
@property (nonatomic,copy)   NSString   *of;  // 归属母公司股东权益
@property (nonatomic,copy)   NSString   *og;  // 少数股东权益
@property (nonatomic,copy)   NSString   *oo;  // 所有者权益合计

@end
