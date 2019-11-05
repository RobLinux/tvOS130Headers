/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>
#import <StoreServices/SSXPCCoding.h>

@class NSString, NSDictionary, NSArray;

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * actionURL; 
@property (nonatomic,copy) NSDictionary * details; 
@property (nonatomic,copy) NSString * dialogId; 
@property (nonatomic,copy) NSString * dialogType; 
@property (nonatomic,copy) NSString * dualAction; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * targetId; 
@property (nonatomic,copy) NSArray * userActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)result;
-(NSDictionary *)details;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setResult:(NSString *)arg1 ;
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)actionURL;
-(NSString *)dialogId;
-(NSString *)dialogType;
-(NSString *)dualAction;
-(NSString *)targetId;
-(NSArray *)userActions;
-(void)setActionURL:(NSString *)arg1 ;
-(void)setDialogId:(NSString *)arg1 ;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setDualAction:(NSString *)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(void)setUserActions:(NSArray *)arg1 ;
@end
