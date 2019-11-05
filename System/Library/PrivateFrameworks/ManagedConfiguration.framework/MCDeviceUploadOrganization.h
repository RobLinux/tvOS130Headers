/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/NSSecureCoding.h>

@class NSString, NSArray, NSNumber;

@interface MCDeviceUploadOrganization : NSObject <NSSecureCoding> {

	NSString* _orgId;
	NSString* _orgName;
	NSArray* _approvers;
	NSNumber* _skipItrackCheckNum;
	NSNumber* _deviceAdditionDepEnabledNum;
	NSNumber* _idmsWhitelistingEnabledNum;
	NSNumber* _idmsRemoveDeviceEnabledNum;
	NSNumber* _deviceAdditionGbiEnabledNum;

}

@property (nonatomic,retain) NSNumber * skipItrackCheckNum;                       //@synthesize skipItrackCheckNum=_skipItrackCheckNum - In the implementation block
@property (nonatomic,retain) NSNumber * deviceAdditionDepEnabledNum;              //@synthesize deviceAdditionDepEnabledNum=_deviceAdditionDepEnabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * idmsWhitelistingEnabledNum;               //@synthesize idmsWhitelistingEnabledNum=_idmsWhitelistingEnabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * idmsRemoveDeviceEnabledNum;               //@synthesize idmsRemoveDeviceEnabledNum=_idmsRemoveDeviceEnabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * deviceAdditionGbiEnabledNum;              //@synthesize deviceAdditionGbiEnabledNum=_deviceAdditionGbiEnabledNum - In the implementation block
@property (nonatomic,readonly) NSString * orgId;                                  //@synthesize orgId=_orgId - In the implementation block
@property (nonatomic,readonly) NSString * orgName;                                //@synthesize orgName=_orgName - In the implementation block
@property (nonatomic,readonly) NSArray * approvers;                               //@synthesize approvers=_approvers - In the implementation block
@property (nonatomic,readonly) BOOL skipItrackCheck; 
@property (nonatomic,readonly) BOOL deviceAdditionDepEnabled; 
@property (nonatomic,readonly) BOOL idmsWhitelistingEnabled; 
@property (nonatomic,readonly) BOOL idmsRemoveDeviceEnabled; 
@property (nonatomic,readonly) BOOL deviceAdditionGbiEnabled; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(NSString *)orgId;
-(NSString *)orgName;
-(id)_approversFromApproversArray:(id)arg1 ;
-(id)initWithOrgId:(id)arg1 orgName:(id)arg2 approvers:(id)arg3 skipItrackCheck:(BOOL)arg4 deviceAdditionDepEnabled:(BOOL)arg5 idmsWhitelistingEnabled:(BOOL)arg6 idmsRemoveDeviceEnabled:(BOOL)arg7 deviceAdditionGbiEnabled:(BOOL)arg8 ;
-(BOOL)skipItrackCheck;
-(BOOL)deviceAdditionDepEnabled;
-(BOOL)idmsWhitelistingEnabled;
-(BOOL)idmsRemoveDeviceEnabled;
-(BOOL)deviceAdditionGbiEnabled;
-(NSArray *)approvers;
-(NSNumber *)skipItrackCheckNum;
-(void)setSkipItrackCheckNum:(NSNumber *)arg1 ;
-(NSNumber *)deviceAdditionDepEnabledNum;
-(void)setDeviceAdditionDepEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)idmsWhitelistingEnabledNum;
-(void)setIdmsWhitelistingEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)idmsRemoveDeviceEnabledNum;
-(void)setIdmsRemoveDeviceEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)deviceAdditionGbiEnabledNum;
-(void)setDeviceAdditionGbiEnabledNum:(NSNumber *)arg1 ;
@end

