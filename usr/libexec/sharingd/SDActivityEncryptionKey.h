/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDActivityKey.h>

@interface SDActivityEncryptionKey : SDActivityKey
+(id)newEncryptionKey;
-(void)prepareForNewEncryptionRequest;
-(unsigned char)getTagWhileEncryptingBytesInPlace:(unsigned char)arg1 counterValue:(unsigned char)arg2 forAdvertisementWithVersion:(unsigned char)arg3 ;
@end

