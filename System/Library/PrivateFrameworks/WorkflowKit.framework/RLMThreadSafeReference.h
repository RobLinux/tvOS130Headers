/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@interface RLMThreadSafeReference : NSObject {

	unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >* _reference;
	id _metadata;
	Class _type;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
+(id)referenceWithThreadConfined:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)resolveReferenceInRealm:(id)arg1 ;
-(id)initWithThreadConfined:(id)arg1 ;
@end

