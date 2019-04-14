//
//  FSIncomeStatementModel.h
//  Expand
//
//  Created by Fuhope on 2017/12/20.
//  Copyright © 2017年 china. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSIncomeStatementModel : NSObject

@property (nonatomic,copy)   NSString   *za;  // 营业收入
@property (nonatomic,copy)   NSString   *zb;  // 营业成本
@property (nonatomic,copy)   NSString   *zc;  // 营业税金及附加
@property (nonatomic,copy)   NSString   *zd;  // 销售费用
@property (nonatomic,copy)   NSString   *ze;  // 管理费用
@property (nonatomic,copy)   NSString   *zf;  // 财务费用
@property (nonatomic,copy)   NSString   *zg;  // 资产减值损失
@property (nonatomic,copy)   NSString   *zh;  // 公允价值变动收益
@property (nonatomic,copy)   NSString   *zi;  // 投资收益
@property (nonatomic,copy)   NSString   *zj;  // 其中：对联营合营企业投资收益
@property (nonatomic,copy)   NSString   *zk;  // 营业利润
@property (nonatomic,copy)   NSString   *zl;  // 营业外收入
@property (nonatomic,copy)   NSString   *zm;  // 营业外支出
@property (nonatomic,copy)   NSString   *zn;  // 非流动资产处置损失
@property (nonatomic,copy)   NSString   *zo;  // 利润总额
@property (nonatomic,copy)   NSString   *zp;  // 所得税费用
@property (nonatomic,copy)   NSString   *zq;  // 净利润
@property (nonatomic,copy)   NSString   *zr;  // 归属于母公司所有者净利润
@property (nonatomic,copy)   NSString   *zs;  // 少数股东损益

@property (nonatomic,copy)   NSString   *sr;  // 少数股东损益
@property (nonatomic,copy)   NSString   *cb;  // 少数股东损益

@end
