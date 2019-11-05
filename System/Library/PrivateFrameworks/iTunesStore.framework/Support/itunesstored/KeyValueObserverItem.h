/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface KeyValueObserverItem : NSObject {

	/*^block*/id _block;
	NSString* _keyPath;
	id _object;

}

@property (nonatomic,readonly) id block;                        //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) id object;                       //@synthesize object=_object - In the implementation block
-(void)dealloc;
-(id)object;
-(NSString *)keyPath;
-(id)block;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 block:(/*^block*/id)arg3 ;
@end

