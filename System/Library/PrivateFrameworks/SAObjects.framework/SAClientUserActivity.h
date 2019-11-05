/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUserActivity.h>

@class NSArray, NSString, NSDictionary, NSURL;

@interface SAClientUserActivity : SAUserActivity

@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSArray * requiredUserInfoKeys; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSURL * webpageURL; 
+(id)clientUserActivity;
+(id)clientUserActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSArray *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSArray *)arg1 ;
-(NSArray *)keywords;
-(void)setKeywords:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

