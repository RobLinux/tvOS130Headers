/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <OpusMarimbaProducer/NSCopying.h>

@protocol MPActionSupport;
@class NSObject, MCAction;

@interface MPAction : NSObject <NSCopying> {

	NSObject*<MPActionSupport> _parentObject;
	MCAction* _action;
	NSObject* _targetObject;

}

@property (nonatomic,retain) NSObject * targetObject;              //@synthesize targetObject=_targetObject - In the implementation block
+(id)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)parent;
-(id)key;
-(void)setParent:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSObject *)targetObject;
-(id)parentDocument;
-(void)configureTarget;
-(void)setTargetObject:(NSObject *)arg1 ;
@end

