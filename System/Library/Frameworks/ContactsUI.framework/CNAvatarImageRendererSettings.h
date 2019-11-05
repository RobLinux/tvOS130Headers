/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNScheduler;
@class CNContactStore, PRPersonaStore, CNUIMeMonitor;

@interface CNAvatarImageRendererSettings : NSObject {

	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	CNUIMeMonitor* _meMonitor;
	id<CNScheduler> _scheduler;

}

@property (nonatomic,retain) CNUIMeMonitor * meMonitor;                  //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,retain) id<CNScheduler> scheduler;                  //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;              //@synthesize personaStore=_personaStore - In the implementation block
+(id)defaultSettings;
+(id)settingsWithContactStore:(id)arg1 ;
+(id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 ;
-(id<CNScheduler>)scheduler;
-(void)setScheduler:(id<CNScheduler>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(PRPersonaStore *)personaStore;
-(CNUIMeMonitor *)meMonitor;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 ;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(void)setMeMonitor:(CNUIMeMonitor *)arg1 ;
@end
