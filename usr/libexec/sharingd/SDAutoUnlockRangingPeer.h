/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CLRangingPeer, NSData;

@interface SDAutoUnlockRangingPeer : NSObject {

	_CLRangingPeer* _clRangingPeer;
	NSData* _macAddressData;

}

@property (nonatomic,retain) _CLRangingPeer * clRangingPeer;              //@synthesize clRangingPeer=_clRangingPeer - In the implementation block
@property (nonatomic,retain) NSData * macAddressData;                     //@synthesize macAddressData=_macAddressData - In the implementation block
-(NSData *)macAddressData;
-(_CLRangingPeer *)clRangingPeer;
-(void)setClRangingPeer:(_CLRangingPeer *)arg1 ;
-(void)setMacAddressData:(NSData *)arg1 ;
@end

