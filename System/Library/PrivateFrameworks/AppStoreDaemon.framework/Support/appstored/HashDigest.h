/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HashDigest : NSObject {

	void* _context;
	long long _digestType;

}
+(id)_stringRepresentationForDigest:(char*)arg1 length:(unsigned)arg2 ;
-(void)dealloc;
-(void)updateWithData:(id)arg1 ;
-(id)initWithDigestType:(long long)arg1 ;
-(id)finalAndCompute;
@end

