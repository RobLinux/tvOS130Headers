/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LASecureData : NSObject {

	unsigned long long _allocatedLength;
	void* _bytes;
	unsigned long long _bytesLength;

}
+(void)resetBytes:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)secureDataWithString:(id)arg1 ;
+(id)secureDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)appendString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)reset;
-(void)prepareBuffer:(unsigned long long)arg1 ;
-(void)resize:(unsigned long long)arg1 ;
-(BOOL)removeLastCharacter;
@end

