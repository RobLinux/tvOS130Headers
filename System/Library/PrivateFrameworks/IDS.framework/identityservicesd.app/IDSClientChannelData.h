/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSData;

@interface IDSClientChannelData : NSObject {

	NSData* _metadataData;
	unsigned _metadataSize;
	SCD_Struct_ID4* _packetBuffer;
	const char* _metadata;

}

@property (nonatomic,readonly) SCD_Struct_ID4* packetBuffer;              //@synthesize packetBuffer=_packetBuffer - In the implementation block
@property (nonatomic,readonly) const char* metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) unsigned metadataSize;                     //@synthesize metadataSize=_metadataSize - In the implementation block
-(void)dealloc;
-(const char*)metadata;
-(unsigned)metadataSize;
-(SCD_Struct_ID4*)packetBuffer;
-(id)initWithBytesBuffer:(char*)arg1 bufferSize:(unsigned)arg2 metadata:(const char*)arg3 metadataSize:(unsigned)arg4 ;
-(id)initWithPacketBuffer:(SCD_Struct_ID4*)arg1 metadata:(const char*)arg2 metadataSize:(unsigned)arg3 ;
@end

