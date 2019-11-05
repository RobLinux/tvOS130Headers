/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSDOMXPathExpression.h>

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression> {

	/*^block*/id _evaluatingBlock;

}

@property (nonatomic,copy) id evaluatingBlock;              //@synthesize evaluatingBlock=_evaluatingBlock - In the implementation block
-(id)evaluate:(id)arg1 :(long long)arg2 :(id)arg3 ;
-(id)evaluatingBlock;
-(id)initWithAppContext:(id)arg1 evaluatingBlock:(/*^block*/id)arg2 ;
-(void)setEvaluatingBlock:(id)arg1 ;
@end
