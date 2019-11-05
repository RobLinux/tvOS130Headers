/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson;

@interface SADPDeviceDetail : SADomainObject <SAAceSerializable>

@property (assign,nonatomic) BOOL canPlaySound; 
@property (nonatomic,copy) NSString * deviceClass; 
@property (nonatomic,copy) NSString * deviceId; 
@property (nonatomic,copy) NSString * deviceLocality; 
@property (nonatomic,copy) NSString * deviceName; 
@property (assign,nonatomic) BOOL foundNearby; 
@property (nonatomic,retain) SAPerson * owner; 
@property (nonatomic,copy) NSString * productName; 
@property (assign,nonatomic) BOOL thisDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceDetail;
+(id)deviceDetailWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setOwner:(SAPerson *)arg1 ;
-(id)groupIdentifier;
-(NSString *)productName;
-(NSString *)deviceClass;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(NSString *)deviceId;
-(void)setProductName:(NSString *)arg1 ;
-(SAPerson *)owner;
-(id)encodedClassName;
-(BOOL)canPlaySound;
-(void)setCanPlaySound:(BOOL)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)deviceLocality;
-(void)setDeviceLocality:(NSString *)arg1 ;
-(BOOL)foundNearby;
-(void)setFoundNearby:(BOOL)arg1 ;
-(BOOL)thisDevice;
-(void)setThisDevice:(BOOL)arg1 ;
@end
