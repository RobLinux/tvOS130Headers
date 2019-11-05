/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNCancelable;
@interface _CNSamplingObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _sampler;
	id _sample;
	id<CNCancelable> _timer;

}

@property (nonatomic,readonly) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,readonly) id<CNObservable> sampler;                 //@synthesize sampler=_sampler - In the implementation block
@property (retain) id sample;                                            //@synthesize sample=_sample - In the implementation block
@property (retain) id<CNCancelable> timer;                               //@synthesize timer=_timer - In the implementation block
-(void)setTimer:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)timer;
-(id)subscribe:(id)arg1 ;
-(id<CNObservable>)observable;
-(id)initWithObservable:(id)arg1 sampler:(id)arg2 ;
-(id<CNObservable>)sampler;
-(void)sendSampleToObserver:(id)arg1 ;
-(void)receiveResult:(id)arg1 ;
-(void)setSample:(id)arg1 ;
-(id)sample;
@end
