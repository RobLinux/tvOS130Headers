/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCNBufferBinding : NSObject {

	NSString* _name;
	long long _frequency;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id block;                           //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) long long frequency;              //@synthesize frequency=_frequency - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setFrequency:(long long)arg1 ;
-(long long)frequency;
@end

