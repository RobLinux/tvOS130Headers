/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFFeedbackListener;
@interface WeakListener : NSObject {

	id<SFFeedbackListener> _weakListener;

}

@property (nonatomic,readonly) id<SFFeedbackListener> strongListener; 
-(id)initWithListener:(id)arg1 ;
-(id<SFFeedbackListener>)strongListener;
@end

