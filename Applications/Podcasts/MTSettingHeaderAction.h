/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTSettingHeaderAction : NSObject {

	/*^block*/id _actionHandler;
	NSString* _title;

}

@property (nonatomic,copy,readonly) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)headerActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(id)actionHandler;
-(void)performAction;
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
@end

