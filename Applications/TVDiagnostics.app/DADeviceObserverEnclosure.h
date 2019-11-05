/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DADeviceObserver, DADeviceObserverEnclosureDelegate;
#import <TVDiagnostics/TVDiagnostics-Structs.h>
@class NSSet;

@interface DADeviceObserverEnclosure : NSObject {

	NSObject* _identifier;
	id<DADeviceObserver> _observer;
	NSSet* _devices;
	id<DADeviceObserverEnclosureDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<NSCopying> identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<DADeviceObserver> observer;                                      //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSSet * devices;                                                    //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic,__weak) id<DADeviceObserverEnclosureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DADeviceObserver>)observer;
-(id<DADeviceObserverEnclosureDelegate>)delegate;
-(void)setDelegate:(id<DADeviceObserverEnclosureDelegate>)arg1 ;
-(NSObject*<NSCopying>)identifier;
-(void)end;
-(void)begin;
-(void)setIdentifier:(NSObject*<NSCopying>)arg1 ;
-(void)setObserver:(id<DADeviceObserver>)arg1 ;
-(NSSet *)devices;
-(void)setDevices:(NSSet *)arg1 ;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
-(void)oneshotWithHandler:(/*^block*/id)arg1 ;
@end

