/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/NSSecureCoding.h>

@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding> {

	NSData* _deviceID;
	NSData* _deviceIDVRFOutput;
	NSMutableArray* _clientDatas;

}

@property (retain) NSData * deviceID;                         //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSData * deviceIDVRFOutput;                //@synthesize deviceIDVRFOutput=_deviceIDVRFOutput - In the implementation block
@property (retain) NSMutableArray * clientDatas;              //@synthesize clientDatas=_clientDatas - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)deviceID;
-(void)setDeviceID:(NSData *)arg1 ;
-(NSData *)deviceIDVRFOutput;
-(NSMutableArray *)clientDatas;
-(id)initWithMutation:(id)arg1 ;
-(void)setDeviceIDVRFOutput:(NSData *)arg1 ;
-(void)setClientDatas:(NSMutableArray *)arg1 ;
-(id)clientRecordForAppVersion:(unsigned long long)arg1 clientDataVRFOutput:(id)arg2 ;
-(id)clientRecordsForVRFOutput:(id)arg1 ;
-(void)removeClientDatasObject:(id)arg1 ;
-(void)addClientDatasObject:(id)arg1 ;
@end

