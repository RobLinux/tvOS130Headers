/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

	double _huggingPriority;
	double _compressionResistancePriority;

}

@property (readonly) double huggingPriority;                            //@synthesize huggingPriority=_huggingPriority - In the implementation block
@property (readonly) double compressionResistancePriority;              //@synthesize compressionResistancePriority=_compressionResistancePriority - In the implementation block
-(double)priorityForVariable:(id)arg1 ;
-(id)_priorityDescription;
-(id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5 ;
-(double)huggingPriority;
-(double)compressionResistancePriority;
@end
