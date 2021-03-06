/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol TBNetwork <NSObject,TBScorable>
@property (nonatomic,readonly) NSString * remoteIdentifier; 
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) unsigned long long authMask; 
@property (nonatomic,readonly) NSString * authDescription; 
@property (nonatomic,readonly) NSString * attributesDescription; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (getter=isCaptive,nonatomic,readonly) BOOL captive; 
@property (getter=isMoving,nonatomic,readonly) BOOL moving; 
@property (getter=isSuspicious,nonatomic,readonly) BOOL suspicious; 
@property (getter=isPublic,nonatomic,readonly) BOOL public; 
@property (nonatomic,readonly) unsigned long long tileKey; 
@optional
-(unsigned long long)tileKey;

@required
-(id)dictionaryRepresentation;
-(BOOL)isMoving;
-(NSSet *)accessPoints;
-(NSString *)SSID;
-(NSString *)remoteIdentifier;
-(BOOL)isCaptive;
-(BOOL)isPublic;
-(unsigned long long)authMask;
-(BOOL)isSuspicious;
-(NSString *)authDescription;
-(NSString *)attributesDescription;

@end

