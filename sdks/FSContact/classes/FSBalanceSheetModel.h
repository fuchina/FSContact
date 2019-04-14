//
//  FSBalanceSheetModel.h
//  Expand
//
//  Created by Fudongdong on 2017/11/21.
//  Copyright © 2017年 china. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSBalanceSheetModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy)   NSString   *time;      // 时间，创建数据时的时间

@property (nonatomic,copy)   NSString   *name;      // 公司名
@property (nonatomic,copy)   NSString   *period;    // 期数，六位数组成，如201604
@property (nonatomic,copy)   NSString   *bz;        // 备注

@property (nonatomic,copy)   NSString   *hbzj;      // 货币资金
@property (nonatomic,copy)   NSString   *jyxjrzc;   // 交易性金融资产
@property (nonatomic,copy)   NSString   *yspj;      // 应收票据
@property (nonatomic,copy)   NSString   *yszk;      // 应收账款
@property (nonatomic,copy)   NSString   *yfkx;      // 预付款项
@property (nonatomic,copy)   NSString   *yslx;      // 应收利息
@property (nonatomic,copy)   NSString   *ysgl;      // 应收股利
@property (nonatomic,copy)   NSString   *qtysk;     // 其他应收款
@property (nonatomic,copy)   NSString   *ch;        // 存货
@property (nonatomic,copy)   NSString   *ynndq;     // 一年内到期非流动资产
@property (nonatomic,copy)   NSString   *qtldzc;    // 其他流动资产
@property (nonatomic,copy)   NSString   *ldzc;      // 流动资产

@property (nonatomic,copy)   NSString   *kgcsjr;    // 可供出售金融资产
@property (nonatomic,copy)   NSString   *dqtz;      // 持有至到期投资
@property (nonatomic,copy)   NSString   *cqysk;     // 长期应收款
@property (nonatomic,copy)   NSString   *cqgqtz;    // 长期股权投资
@property (nonatomic,copy)   NSString   *tzxfdc;    // 投资性房地产
@property (nonatomic,copy)   NSString   *gdzc;      // 固定资产
@property (nonatomic,copy)   NSString   *zjgc;      // 在建工程
@property (nonatomic,copy)   NSString   *gcwz;      // 工程物资
@property (nonatomic,copy)   NSString   *gdzcql;    // 固定资产清理
@property (nonatomic,copy)   NSString   *scxswzc;   // 生产性生物资产
@property (nonatomic,copy)   NSString   *yqzc;      // 油气资产
@property (nonatomic,copy)   NSString   *wxzc;      // 无形资产
@property (nonatomic,copy)   NSString   *kfzc;      // 开发支出
@property (nonatomic,copy)   NSString   *sy;        // 商誉
@property (nonatomic,copy)   NSString   *cqdtfy;    // 长期待摊费用
@property (nonatomic,copy)   NSString   *dysds;     // 递延所得税资产
@property (nonatomic,copy)   NSString   *qtfldzc;   // 其他非流动资产
@property (nonatomic,copy)   NSString   *fldzc;     // 非流动资产

@property (nonatomic,copy)   NSString   *zzc;       // 总资产

@property (nonatomic,copy)   NSString   *dqjk;      // 短期借款
@property (nonatomic,copy)   NSString   *jyxjrfz;   // 交易性金融负债
@property (nonatomic,copy)   NSString   *yfpj;      // 应付票据
@property (nonatomic,copy)   NSString   *yfzk;      // 应付账款
@property (nonatomic,copy)   NSString   *yskx;      // 预收款项
@property (nonatomic,copy)   NSString   *yfzgxc;    // 应付职工薪酬
@property (nonatomic,copy)   NSString   *yjsf;      // 应交税费
@property (nonatomic,copy)   NSString   *yflx;      // 应付利息
@property (nonatomic,copy)   NSString   *yfgl;      // 应付股利
@property (nonatomic,copy)   NSString   *qtyfk;     // 其他应付款
@property (nonatomic,copy)   NSString   *ynndqfz;   // 一年内到期的非流动负债
@property (nonatomic,copy)   NSString   *qtldfz;    // 其他流动负债
@property (nonatomic,copy)   NSString   *ldfz;      // 流动负债

@property (nonatomic,copy)   NSString   *cqjk;      // 长期借款
@property (nonatomic,copy)   NSString   *yfzq;      // 应付债券
@property (nonatomic,copy)   NSString   *cqyfk;     // 长期应付款
@property (nonatomic,copy)   NSString   *zxyfk;     // 专项应付款
@property (nonatomic,copy)   NSString   *dysdsfz;   // 递延所得税负债
@property (nonatomic,copy)   NSString   *qtfldfz;   // 其他非流动负债
@property (nonatomic,copy)   NSString   *fldfz;     // 非流动负债合计

@property (nonatomic,copy)   NSString   *fz;        // 负债合计

@property (nonatomic,copy)   NSString   *sszb;      // 实收资本
@property (nonatomic,copy)   NSString   *zbgj;      // 资本公积
@property (nonatomic,copy)   NSString   *kcg;       // 库存股
@property (nonatomic,copy)   NSString   *yygj;      // 盈余公积
@property (nonatomic,copy)   NSString   *wfplr;     // 未分配利润
@property (nonatomic,copy)   NSString   *gsymgs;    // 归属于母公司股东权益
@property (nonatomic,copy)   NSString   *ssgdqy;    // 少数股东权益
@property (nonatomic,copy)   NSString   *syzqy;     // 所有者权益

+ (NSArray<NSString *> *)tableFiels;

+ (NSString *)hansForSubjectOfBalanceSheetModel:(NSString *)subject;

@end
