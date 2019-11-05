/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OKSettingsTransactionItem : NSObject {

	/*^block*/id _updateBlock;
	NSString* key;
	NSString* _key;

}

@property (nonatomic,copy) id updateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
@end

