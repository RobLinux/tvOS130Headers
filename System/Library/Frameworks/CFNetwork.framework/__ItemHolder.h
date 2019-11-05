/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSDate, NSNumber;

@interface __ItemHolder : NSObject {

	id<NSCopying> _key;
	id _item;
	NSDate* _lastTimeUsed;
	NSNumber* _version;

}

@property (nonatomic,retain) id<NSCopying> key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id item;                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeUsed;              //@synthesize lastTimeUsed=_lastTimeUsed - In the implementation block
@property (nonatomic,retain) NSNumber * version;                 //@synthesize version=_version - In the implementation block
-(id)description;
-(void)dealloc;
-(id<NSCopying>)key;
-(NSNumber *)version;
-(id)initWithItem:(id)arg1 key:(id)arg2 ;
-(void)touch;
-(void)setKey:(id<NSCopying>)arg1 ;
-(id)item;
-(void)setItem:(id)arg1 ;
-(NSDate *)lastTimeUsed;
-(void)setLastTimeUsed:(NSDate *)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
@end

