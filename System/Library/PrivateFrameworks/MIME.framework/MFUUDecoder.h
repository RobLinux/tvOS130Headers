/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer {

	unsigned long long _begin;
	unsigned long long _end;
	unsigned long long _length;
	unsigned long long _readBytes;
	unsigned char _encoded[4];
	BOOL _beginComplete;
	BOOL _dataComplete;
	BOOL _validLength;
	BOOL _lineComplete;
	BOOL _passthrough;

}
-(long long)appendData:(id)arg1 ;
-(void)done;
@end

