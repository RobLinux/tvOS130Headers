/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@class NSArray;

@interface UIKeyboardTaskEntry : NSObject <NSCopying> {

	/*^block*/id __task;
	NSArray* __creationStack;

}

@property (nonatomic,retain,readonly) NSArray * originatingStack;              //@synthesize _creationStack=__creationStack - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithTask:(/*^block*/id)arg1 ;
-(void)execute:(id)arg1 ;
-(NSArray *)originatingStack;
@end

