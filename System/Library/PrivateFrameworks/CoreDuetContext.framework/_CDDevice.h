/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <CoreDuetContext/NSCopying.h>
#import <CoreDuetContext/NSSecureCoding.h>

@class NSString;

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _companion;
	NSString* _deviceID;
	unsigned long long _identifier;
	NSString* _name;
	long long _deviceClass;
	NSString* _model;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                              //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) long long deviceClass;                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (getter=isCompanion,nonatomic,readonly) BOOL companion;              //@synthesize companion=_companion - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localDevice;
+(unsigned long long)identifierForDeviceID:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(long long)deviceClass;
-(NSString *)model;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setDeviceClass:(long long)arg1 ;
-(BOOL)isCompanion;
-(id)initWithName:(id)arg1 deviceID:(id)arg2 deviceClass:(long long)arg3 model:(id)arg4 companion:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 identifier:(unsigned long long)arg2 deviceClass:(long long)arg3 ;
-(id)initWithName:(id)arg1 deviceID:(id)arg2 model:(id)arg3 companion:(BOOL)arg4 ;
-(BOOL)matchesDeviceTypes:(unsigned long long)arg1 ;
@end

