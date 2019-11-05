/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterFlow.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NWEndpoint, NSUUID;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {

	sockaddr_storage _lastLocalAddress;
	sockaddr_storage _lastRemoteAddress;
	int _socketFamily;
	int _socketType;
	int _socketProtocol;
	NWEndpoint* _remoteEndpoint;
	NWEndpoint* _localEndpoint;
	NSUUID* _uuid;
	NSUUID* _euuid;
	unsigned long long _socketID;

}

@property (nonatomic,copy) NSUUID * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSUUID * euuid;                   //@synthesize euuid=_euuid - In the implementation block
@property (copy) NWEndpoint * localEndpoint;                 //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (copy) NWEndpoint * remoteEndpoint;                //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (assign) int socketFamily;                         //@synthesize socketFamily=_socketFamily - In the implementation block
@property (assign) int socketType;                           //@synthesize socketType=_socketType - In the implementation block
@property (assign) int socketProtocol;                       //@synthesize socketProtocol=_socketProtocol - In the implementation block
@property (assign) unsigned long long socketID;              //@synthesize socketID=_socketID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NWEndpoint *)localEndpoint;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)remoteEndpoint;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)euuid;
-(unsigned long long)socketID;
-(id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7 socketID:(unsigned long long)arg8 ;
-(void)lastLocalAddress:(sockaddr*)arg1 ;
-(void)lastRemoteAddress:(sockaddr*)arg1 ;
-(void)setSocketID:(unsigned long long)arg1 ;
-(void)setEuuid:(NSUUID *)arg1 ;
-(void)setSocketFamily:(int)arg1 ;
-(void)setSocketType:(int)arg1 ;
-(void)setSocketProtocol:(int)arg1 ;
-(int)socketFamily;
-(int)socketType;
-(int)socketProtocol;
@end

