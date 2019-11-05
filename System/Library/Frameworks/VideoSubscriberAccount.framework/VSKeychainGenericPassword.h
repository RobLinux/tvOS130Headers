/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSKeychainItem.h>

@class NSString, NSDate, NSNumber;

@interface VSKeychainGenericPassword : VSKeychainItem

@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * itemDescription; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSNumber * creatorCode; 
@property (nonatomic,copy) NSNumber * typeCode; 
@property (nonatomic,copy) NSString * label; 
@property (assign,getter=isSynchronizable,nonatomic) BOOL synchronizable; 
@property (assign,getter=isInvisible,nonatomic) BOOL invisible; 
@property (assign,getter=isNegative,nonatomic) BOOL negative; 
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * generic; 
-(NSString *)comment;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(NSString *)label;
-(NSString *)service;
-(void)setLabel:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(BOOL)isNegative;
-(NSNumber *)typeCode;
-(void)setTypeCode:(NSNumber *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setSynchronizable:(BOOL)arg1 ;
-(void)setInvisible:(BOOL)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(NSNumber *)creatorCode;
-(void)setCreatorCode:(NSNumber *)arg1 ;
-(NSString *)itemDescription;
-(NSString *)generic;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setGeneric:(NSString *)arg1 ;
-(id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1 ;
-(void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isSynchronizable;
-(BOOL)isInvisible;
@end

