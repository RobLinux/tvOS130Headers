/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, CKContainerID;

@interface SCKDatabaseSchema : NSObject {

	NSString* _name;
	long long _environment;
	NSArray* _zoneSchemas;
	long long _security;

}

@property (assign,nonatomic) long long security;                                   //@synthesize security=_security - In the implementation block
@property (nonatomic,copy) NSArray * zoneSchemas;                                  //@synthesize zoneSchemas=_zoneSchemas - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long environment;                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) CKContainerID * containerID; 
@property (nonatomic,copy,readonly) NSArray * zoneIDs; 
@property (nonatomic,readonly) BOOL requiresDeviceToDeviceEncryption; 
-(NSString *)name;
-(long long)environment;
-(CKContainerID *)containerID;
-(void)setSecurity:(long long)arg1 ;
-(long long)security;
-(NSArray *)zoneIDs;
-(NSArray *)zoneSchemas;
-(id)initWithName:(id)arg1 environment:(long long)arg2 security:(long long)arg3 zoneSchemas:(id)arg4 ;
-(BOOL)requiresDeviceToDeviceEncryption;
-(id)schemaForZoneName:(id)arg1 ;
-(void)setZoneSchemas:(NSArray *)arg1 ;
@end

