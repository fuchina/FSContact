//
//  FSRecentContactAPI.h
//  FSBaseController
//
//  Created by FudonFuchina on 2019/4/14.
//

#import "FSBaseAPI.h"
#import "FSRecentModel.h"

static NSString * _Nullable _tb_recent_contact = @"tb_recentcontact";

NS_ASSUME_NONNULL_BEGIN

@interface FSRecentContactAPI : FSBaseAPI

+ (NSMutableArray *)recentList:(NSString *)password;

+ (NSString *)addRecent:(NSString *)name phone:(NSString *)phone;

@end

NS_ASSUME_NONNULL_END
