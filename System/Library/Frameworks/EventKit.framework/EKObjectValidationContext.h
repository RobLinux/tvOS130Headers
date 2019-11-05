/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKObject;

@interface EKObjectValidationContext : NSObject {

	BOOL _reachedMaxDepth;
	EKObject* _rootObject;
	unsigned long long _depth;

}

@property (nonatomic,readonly) EKObject * rootObject;               //@synthesize rootObject=_rootObject - In the implementation block
@property (assign,nonatomic) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) BOOL reachedMaxDepth;                  //@synthesize reachedMaxDepth=_reachedMaxDepth - In the implementation block
-(unsigned long long)depth;
-(EKObject *)rootObject;
-(void)setDepth:(unsigned long long)arg1 ;
-(BOOL)reachedMaxDepth;
-(id)initWithRootObject:(id)arg1 ;
-(void)faultIfNeededForObject:(id)arg1 ;
-(void)setReachedMaxDepth:(BOOL)arg1 ;
@end

