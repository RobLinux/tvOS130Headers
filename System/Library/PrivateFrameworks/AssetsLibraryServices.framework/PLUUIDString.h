/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <Foundation/NSString.h>

@interface PLUUIDString : NSString {

	unsigned char _uuid[16];
	char _uuidString[37];

}
+(id)UUIDString;
+(BOOL)parseUUIDString:(id)arg1 uuidBuffer:(char*)arg2 ;
-(id)init;
-(unsigned long long)length;
-(const char*)UTF8String;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)initWithUUID:(unsigned char)arg1 ;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithUUIDData:(id)arg1 ;
-(id)initWithCFUUIDBytes:(SCD_Struct_PL6)arg1 ;
-(id)UUIDData;
-(SCD_Struct_PL6)UUIDBytes;
@end

