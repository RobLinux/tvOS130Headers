/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <VideoSubscriberAccountUI/VSJSAlertAction.h>
@class NSString, JSValue;


@protocol VSJSAlertAction <JSExport>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,retain) JSValue * callback; 
@required
-(id)init;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)style;
-(void)setStyle:(id)arg1;
-(JSValue *)callback;
-(void)setCallback:(id)arg1;

@end


@class NSString, JSValue;

@interface VSJSAlertAction : IKJSObject <VSJSAlertAction> {

	NSString* _title;
	NSString* _style;
	JSValue* _callback;

}

@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) JSValue * callback;              //@synthesize callback=_callback - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(JSValue *)callback;
-(void)setCallback:(JSValue *)arg1 ;
@end

