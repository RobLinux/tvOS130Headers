/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <CoreAudio/Core_Audio_Gateway.h>
#import <CoreAudio/Core_Audio_Property_Listener.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface Core_Audio_Property_Listener_Gateway : Core_Audio_Gateway <Core_Audio_Property_Listener> {

	Listener_List* _list_ptr;
	NSObject*<OS_dispatch_queue> _notification_queue;

}

@property (assign,nonatomic) Listener_List* list_ptr;                                      //@synthesize list_ptr=_list_ptr - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notification_queue;              //@synthesize notification_queue=_notification_queue - In the implementation block
@property (nonatomic,readonly) Listener_List* list; 
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(Listener_List*)list;
-(id)initWithObjectMap:(shared_ptr<HAL::Client::ObjectIDMap>*)arg1 ;
-(unsigned long long)add_listener_for_property_id:(Property_Identity)arg1 with_listener_proc:(/*function pointer*/void*)arg2 and_user_data:(void*)arg3 ;
-(void)remove_listener_for_property_id:(Property_Identity)arg1 with_listener_proc:(/*function pointer*/void*)arg2 and_user_data:(void*)arg3 ;
-(unsigned long long)add_listener_for_property_id:(Property_Identity)arg1 with_listener_block:(/*^block*/id)arg2 and_queue:(id)arg3 ;
-(void)handle_server_disconnected;
-(void)remove_listener_for_property_id:(Property_Identity)arg1 with_listener_block:(/*^block*/id)arg2 and_queue:(id)arg3 ;
-(void)handle_server_reconnected;
-(void)release_resources;
-(void)synchronously_notify_listeners_of_object:(unsigned)arg1 about_changes_to_properties:(const vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress> >*)arg2 ;
-(void)notify_listeners_of_object:(unsigned)arg1 about_changes_to_properties:(const vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress> >*)arg2 ;
-(void)handle_property_changes:(id)arg1 ;
-(void)handle_property_changes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)remove_listener_with_token:(unsigned long long)arg1 ;
-(void)remove_listeners_for_device_id:(unsigned)arg1 ;
-(Listener_List*)list_ptr;
-(void)setList_ptr:(Listener_List*)arg1 ;
-(NSObject*<OS_dispatch_queue>)notification_queue;
-(void)setNotification_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

