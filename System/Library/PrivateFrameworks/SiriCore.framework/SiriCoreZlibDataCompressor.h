/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/SiriCoreDataCompressor.h>

@interface SiriCoreZlibDataCompressor : SiriCoreDataCompressor {

	z_stream_s* _deflateStream;
	unsigned char _deflateBuffer[8192];

}
-(id)init;
-(void)dealloc;
-(id)compressedDataForData:(id)arg1 error:(id*)arg2 ;
@end

