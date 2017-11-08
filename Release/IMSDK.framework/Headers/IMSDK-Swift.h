// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.65 clang-900.0.37)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("IMSDK")

/// 消息属性
SWIFT_CLASS("_TtC5IMSDK13CustomMessage")
@interface CustomMessage : NSObject
/// id
@property (nonatomic, copy) NSString * _Null_unspecified _id;
/// 设备类型
@property (nonatomic, copy) NSString * _Null_unspecified device;
/// 信息内容
@property (nonatomic, copy) NSString * _Null_unspecified message;
/// 信息类型
@property (nonatomic, copy) NSString * _Nullable messageType;
/// 平台类型
@property (nonatomic, copy) NSString * _Null_unspecified platform;
/// 记录消息的Id
@property (nonatomic, copy) NSString * _Null_unspecified sessionId;
/// 时间
@property (nonatomic, copy) NSString * _Null_unspecified createdTime;
/// 消息来源:0是发送、1是接收
@property (nonatomic, copy) NSString * _Null_unspecified fromType;
/// 消息发送状态 //@“0”发送成功  @“1”发送失败 2正在发送
@property (nonatomic, copy) NSString * _Null_unspecified status;
/// 录音时间
@property (nonatomic, copy) NSString * _Null_unspecified recordSeconds;
/// 新增字段 本地文件路径
@property (nonatomic, copy) NSString * _Null_unspecified localFilePath;
/// 新增字段 网络文件路径
@property (nonatomic, copy) NSString * _Null_unspecified remoteFilePath;
/// 新增字段 文件名
@property (nonatomic, copy) NSString * _Null_unspecified fileName;
/// 新增字段 文件大小
@property (nonatomic, copy) NSString * _Null_unspecified fileSize;
/// 新增字段 下载状态 “0”已下载  “1”未下载  “2”下载中
@property (nonatomic, copy) NSString * _Nullable downloadState;
/// 新增字段iframe类型的消息宽度
@property (nonatomic, copy) NSString * _Null_unspecified width;
/// 新增字段iframe类型的消息高度
@property (nonatomic, copy) NSString * _Null_unspecified height;
/// 新增字段 坐席工号
@property (nonatomic, copy) NSString * _Null_unspecified agentExten;
/// 新增字段 坐席名称
@property (nonatomic, copy) NSString * _Null_unspecified agentName;
/// 新增字段 坐席头像
@property (nonatomic, copy) NSString * _Null_unspecified agentIcon;
/// 新增字段 语音文字
@property (nonatomic, copy) NSString * _Null_unspecified audioText;
/// 新增字段 机器人消息
@property (nonatomic, copy) NSString * _Null_unspecified isRobot;
/// 新增字段 语音未读
@property (nonatomic, copy) NSString * _Null_unspecified isRead;
- (void)setValue:(id _Nullable)value forUndefinedKey:(NSString * _Nonnull)key;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMSDK7QMAgent")
@interface QMAgent : NSObject
/// 坐席工号
@property (nonatomic, copy) NSString * _Null_unspecified exten;
/// 坐席名称
@property (nonatomic, copy) NSString * _Null_unspecified name;
/// 坐席头像
@property (nonatomic, copy) NSString * _Null_unspecified icon_url;
/// 类型
@property (nonatomic, copy) NSString * _Null_unspecified type;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol QMKRegisterDelegate;
@protocol QMKServiceDelegate;
@class NSDictionary;
@class UIImage;
@class NSArray;

SWIFT_CLASS("_TtC5IMSDK9QMConnect")
@interface QMConnect : NSObject
/// 注册accessId、初始化SDK:
/// 初始化成功，建立tcp连接，保证移动端消息的接收，如果建立tcp连接失败，会导致消息接收不到
/// 以通知的方式进行回调
/// param accessId:  接入客服系统的密钥， 可在客服系统登录平台获取
/// param userName:  用户名， 区分用户， 用户名可直接在后台显示
/// param userId:    用户ID， 区分用户
+ (void)registerSDKWithAppKey:(NSString * _Nonnull)accessId userName:(NSString * _Nonnull)userName userId:(NSString * _Nonnull)userId;
/// 注册accessId、初始化SDK:
/// 初始化成功，建立tcp连接，保证移动端消息的接收，如果建立tcp连接失败，会导致消息接收不到
/// 以代理的方式进行回调
/// param accessId:  接入客服系统的密钥， 可在客服系统登录平台获取
/// param userName:  用户名， 区分用户， 用户名可直接在后台显示
/// param userId:    用户ID， 区分用户
+ (void)registerSDKWithAppKey:(NSString * _Nonnull)accessId userName:(NSString * _Nonnull)userName userId:(NSString * _Nonnull)userId delegate:(id <QMKRegisterDelegate> _Nonnull)delegate;
/// 注销、断开tcp连接
/// 客服人员可收到用户离开的通知
+ (void)logout;
/// 发起新会话:
/// 调用此接口、可以拥有与客服对话的能力
/// param peer:          技能组ID，客服平台配置多个技能组时，需要传入对应的技能组ID，会话才能接入到对应的技能组，
/// param successBlock:  接入会话成功回调，回调参数为bool类型，判断后台是否开启问卷调查功能
/// param failBlock:     接入会话失败回调，
+ (void)sdkBeginNewChatSession:(NSString * _Nonnull)peer successBlock:(void (^ _Nonnull)(BOOL))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 发起新会话:
/// 调用此接口、可以拥有与客服对话的能力
/// param peer:          技能组ID，客服平台配置多个技能组时，需要传入对应的技能组ID，会话才能接入到对应的技能组，
/// param delegate:      聊天界面的代理方法，
/// param successBlock:  接入会话成功回调，回调参数为bool类型，判断后台是否开启问卷调查功能
/// param failBlock:     接入会话失败回调，
+ (void)sdkBeginNewChatSessionWithDelegate:(NSString * _Nonnull)peer delegate:(id <QMKServiceDelegate> _Nonnull)delegate successBlock:(void (^ _Nonnull)(BOOL))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 会话定时断开
/// 调用此接口、可以再客户在一定时间没有新消息的时候断开会话
/// param successBlock:  成功回调
/// param failBlock:     回调失败
+ (void)sdkChatTimerBreaking:(void (^ _Nonnull)(NSDictionary * _Nonnull))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 获取渠道全局配置
/// 调用此接口获取后台的全局配置信息，注册成功会主动请求一次插入本地plist文件，用户也可以自行调用获取
/// param configs:       配置信息
/// param successBlock:  成功回调
/// param failBlock:     回调失败
+ (void)sdkGetWebchatGlobleConfig:(void (^ _Nonnull)(NSDictionary * _Nonnull))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 发送文本消息:
/// 调用此接口、可以发送文本消息，包括文字、表情
/// param text:            文本消息内容
/// param successBlock:    成功回调
/// param failBlock:       失败回调
+ (void)sendMsgText:(NSString * _Nonnull)text successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 发送图片消息:
/// 调用此接口、可以发送图片消息
/// param pic:             图片消息内容
/// param successBlock:    成功回调
/// param failBlock:       失败回调
+ (void)sendMsgPic:(UIImage * _Nonnull)pic successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 发送图片消息:
/// 调用此接口、可以发送图片消息
/// param filePath:        图片文件相对路径
/// param successBlock:    成功回调
/// param failBlock:       失败回调
+ (void)sendMsgImage:(NSString * _Nonnull)filePath successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 发送语音消息:
/// 调用此接口、可以发送语音消息
/// param audio:           语音消息路径 语音名字需要带mp3后缀
/// param duration:        语音消息时长
/// param successBlock:    成功回调
/// param failBlock:       失败回调
+ (void)sendMsgAudio:(NSString * _Nonnull)audio duration:(NSString * _Nonnull)duration successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(NSString * _Nonnull))failBlock;
/// 发送文件消息:
/// 调用此接口、可以发送文件消息
/// param fileName:        文件名称
/// param filePath:        沙盒文件相对路径
/// param fileSize:        文件大小
/// param progressHander:  上传进度回调
/// param successBlock:    成功回调
/// param failBlock:       失败回调
+ (void)sendMsgFile:(NSString * _Nonnull)fileName filePath:(NSString * _Nonnull)filePath fileSize:(NSString * _Nonnull)fileSize progressHander:(void (^ _Nonnull)(float))progressHander successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 下载消息中的文件：
/// param message:         消息实例
/// param localFilePath:   沙盒文件相对路径
/// param progressHander:  下载进度回调
/// param successBlock:    成功回调
/// param failBlock:       失败回调
+ (void)downloadFileWithMessage:(CustomMessage * _Nonnull)message localFilePath:(NSString * _Nullable)localFilePath progressHander:(void (^ _Nonnull)(float))progressHander successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(NSString * _Nonnull))failBlock;
/// 消息重发:
/// 调用此接口、将未发送的消息重新发送
/// param message:       消息内容
/// param successBlock:  成功回调
/// param failBlock:     失败回调
+ (void)resendMessage:(CustomMessage * _Nonnull)message successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 封装消息模型:
/// 目前只支持新增的评价类型消息(不支持文本、语音、图片等)
+ (CustomMessage * _Nonnull)createMessageOfInvestigations SWIFT_WARN_UNUSED_RESULT;
/// 获取数据库信息:
/// 调用此接口、获取数据库信息
/// param num            : 单次获取消息数目(无默认值)
/// param [CustomMessage]: 返回消息数组
+ (NSArray<CustomMessage *> * _Nonnull)getDataFromDatabase:(NSInteger)number SWIFT_WARN_UNUSED_RESULT;
/// 获取单条数据库信息:
/// 调用此接口、获取数据库一条记录、用于消息重发
/// param messageId:       消息ID
/// param [CustomMessage]: 返回消息数组
+ (NSArray<CustomMessage *> * _Nonnull)getOneDataFromDatabase:(NSString * _Nonnull)messageId SWIFT_WARN_UNUSED_RESULT;
/// 删除单条数据库信息:
/// 用此接口、删除数据路一条记录、只能删除本地消息
/// param messageId:  消息ID
+ (void)removeDataFromDataBase:(NSString * _Nonnull)messageId;
/// 修改语音状态接口:
/// 将语音由未读取状态变为已读取状态
/// param messageId:  消息ID
+ (void)changeAudioMessageStatus:(NSString * _Nonnull)messageId;
/// 请求人工服务:
/// 调用此接口、请求人工服务(如后台开启智能机器人功能、默认为机器人服务器)
/// param successBlock:  成功回调
/// param failBlock:     失败回调
+ (void)sdkConvertManual:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 获取满意度评价信息:
/// 用于满意度调查
/// param investigateArray: 评价信息
/// param successBlock:     成功回调
/// param failureBlock :    失败回调
+ (void)sdkGetInvestigate:(void (^ _Nonnull)(NSArray * _Nonnull))successBlock failureBlock:(void (^ _Nonnull)(void))failureBlock;
/// 获取技能组信息:
/// 开始会话前选择技能组进入
/// param investigateArray: 评价信息
/// param successBlock:     成功回调
/// param failureBlock:     失败回调
+ (void)sdkGetPeers:(void (^ _Nonnull)(NSArray * _Nonnull))successBlock failureBlock:(void (^ _Nonnull)(void))failureBlock;
/// 提交满意度调查信息
/// param name:          评价信息
/// param value:         评价信息ID
/// param successBlock:  成功回调
/// param failBlock:     失败回调
+ (void)sdkSubmitInvestigate:(NSString * _Nonnull)name value:(NSString * _Nonnull)value successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 留言接口
/// 客服离线状态下，未配置机器人客服或转人工客服时，可进行留言操作
/// param phone:         联系电话
/// param Email:         联系邮箱
/// param message:       留言内容
/// param successBlock:  成功回调
/// param failBlock:     失败回调
+ (void)sdkSubmitLeaveMessage:(NSString * _Nonnull)peer phone:(NSString * _Nonnull)phone Email:(NSString * _Nonnull)Email message:(NSString * _Nonnull)message successBlock:(void (^ _Nonnull)(void))successBlock failBlock:(void (^ _Nonnull)(void))failBlock;
/// 自建服务器设置网络地址:
/// 是不是自建服务器的用户不需要设置此项
/// param tcpHost:       TCP连接地址
/// param tcpPort:       TCP端口号
/// param httpPost:      HTTP请求地址
+ (void)setServerAddress:(NSString * _Nonnull)tcpHost tcpPort:(NSInteger)tcpPort httpPost:(NSString * _Nonnull)httpPost;
/// 是否启用留言功能
/// 全局配置：
/// 启用留言功能，坐席不在线跳转到留言面板进行留言
/// 未启用留言功能，坐席不在线，不会跳转至留言面板
+ (BOOL)allowedLeaveMessage SWIFT_WARN_UNUSED_RESULT;
/// 留言提示窗口信息
/// 全局配置：
/// 未启用留言状态下，弹出的提示内容
+ (NSString * _Nonnull)leaveMessageAlert SWIFT_WARN_UNUSED_RESULT;
/// 留言内容占位
/// 全局配置：
/// 启用留言状态下，展示在留言板输入框的占位提醒
+ (NSString * _Nonnull)leaveMessagePlaceholder SWIFT_WARN_UNUSED_RESULT;
/// 是否启用用户无响应会话自动关闭功能
/// 全局配置：
/// 用户长时间未给坐席发送消息，自动关闭当前会话 并退出聊天界面，需要后台正确配置 提示和断开时间
+ (BOOL)allowedBreakSession SWIFT_WARN_UNUSED_RESULT;
/// 自动关闭会话提示语
/// 全局配置：
/// 后台配置的提示语，在断开前进行提示
+ (NSString * _Nonnull)breakSessionAlert SWIFT_WARN_UNUSED_RESULT;
/// 自动关闭会话时间
/// 全局配置：
/// 从开始新的会话、或用户发送一条消息开始计时
+ (NSInteger)breakSessionDuration SWIFT_WARN_UNUSED_RESULT;
/// 自动关闭会话提示时间
/// 全局配置:
/// 关闭会话前进行的提示的时间，从开始新的会话、或用户发送一条消息开始计时
+ (NSInteger)breakSessionAlertDuration SWIFT_WARN_UNUSED_RESULT;
/// 判断是否启用机器人
+ (BOOL)allowRobot SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, QMKErrorDomain) {
/// key不存在
  QMKErrorDomainKeyNotFound = -4999,
/// key不匹配
  QMKErrorDomainKeyNotMatch = -4998,
/// 用户名不存在
  QMKErrorDomainUserNameNotFound = -4997,
/// 用户id不存在
  QMKErrorDomainUserIdNotFound = -4996,
/// 用户id不匹配
  QMKErrorDomainUserIdNotMatch = -4995,
/// 转换地址失败
  QMKErrorDomainConvertAddressFail = -4994,
/// 创建连接失败
  QMKErrorDomainCreateConnectFail = -4993,
/// 鉴权失败
  QMKErrorDomainAcceptFail = -4992,
/// 连接服务器失败
  QMKErrorDomainConnectServerFail = -4991,
/// 服务端异常
  QMKErrorDomainServiceException = -4990,
/// 未知错误
  QMKErrorDomainUnknowError = -4989,
};


SWIFT_PROTOCOL("_TtP5IMSDK19QMKRegisterDelegate_")
@protocol QMKRegisterDelegate
/// 注册成功
- (void)registerSuccess;
/// 注册失败
- (void)registerFailureWithReason:(enum QMKErrorDomain)reason;
@end

enum QMKStatus : NSInteger;

SWIFT_PROTOCOL("_TtP5IMSDK18QMKServiceDelegate_")
@protocol QMKServiceDelegate
/// 当前客服状态
- (void)currentAgentStatusWithStatus:(enum QMKStatus)status;
@optional
/// 当前坐席信息
- (void)currentAgentInfoWithAgent:(QMAgent * _Nonnull)agent;
/// 当前会话排队数
- (void)currentSessionWaitNumberWithNumber:(NSInteger)number;
/// 邀请评价
- (void)inviteEvaluate;
@end

typedef SWIFT_ENUM(NSInteger, QMKStatus) {
/// 机器人在线
  QMKStatusRobot = 0,
/// 客服在线
  QMKStatusOnline = 1,
/// 客服离线
  QMKStatusOffline = 2,
/// 客服领取会话
  QMKStatusClaim = 3,
/// 客服结束会话
  QMKStatusFinish = 4,
};



SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
