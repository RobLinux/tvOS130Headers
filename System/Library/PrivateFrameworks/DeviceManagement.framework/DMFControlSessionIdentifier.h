/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <DeviceManagement/DMFControlGroupIdentifier.h>

@class DMFControlGroupIdentifier;

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier {

	unsigned short _port;
	unsigned _leaderIP;

}

@property (nonatomic,readonly) unsigned leaderIP;                                        //@synthesize leaderIP=_leaderIP - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                      //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) DMFControlGroupIdentifier * groupIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(unsigned short)port;
-(id)initWithString:(id)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 port:(unsigned short)arg4 ;
-(unsigned)leaderIP;
-(BOOL)isEqualToControlSessionIdentifier:(id)arg1 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 ;
@end

